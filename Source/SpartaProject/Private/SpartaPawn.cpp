#include "SpartaPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

ASpartaPawn::ASpartaPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    RootComponent = CapsuleComp;
    CapsuleComp->SetSimulatePhysics(false);

    MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    MeshComp->SetupAttachment(RootComponent);

    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    SpringArmComp->SetupAttachment(RootComponent);
    SpringArmComp->TargetArmLength = 400.0f;
    SpringArmComp->bUsePawnControlRotation = false;
    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
}

void ASpartaPawn::BeginPlay()
{
    Super::BeginPlay();

    if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
}

void ASpartaPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASpartaPawn::Move);
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASpartaPawn::Look);
    }
}

void ASpartaPawn::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();
    float DeltaTime = GetWorld()->GetDeltaSeconds();

    if (Controller != nullptr)
    {
        FVector DeltaLocation(MovementVector.Y * 600.f * DeltaTime, MovementVector.X * 600.f * DeltaTime, 0.f);
        AddActorLocalOffset(DeltaLocation, true); // true는 이동 중 벽에 걸리면 멈추게 함(Sweep)
    }
}

void ASpartaPawn::Look(const FInputActionValue& Value)
{
    FVector2D LookAxisVector = Value.Get<FVector2D>();
    float DeltaTime = GetWorld()->GetDeltaSeconds();

    AddActorLocalRotation(FRotator(0.f, LookAxisVector.X * 90.f * DeltaTime, 0.f));

    FRotator NewRot = SpringArmComp->GetRelativeRotation();
    NewRot.Pitch += LookAxisVector.Y * 90.f * DeltaTime * -1.0f; // 마우스 위가 플러스가 되도록 -1 곱함
    NewRot.Pitch = FMath::Clamp(NewRot.Pitch, -60.f, 60.f); // 고개가 너무 뒤로 꺾이지 않게 제한
    SpringArmComp->SetRelativeRotation(FRotator(NewRot.Pitch, 0.f, 0.f));
}

void ASpartaPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}