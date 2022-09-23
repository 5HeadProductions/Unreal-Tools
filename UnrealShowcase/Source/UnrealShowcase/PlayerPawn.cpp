// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SetRootComponent(Sphere);

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Sphere);

	Head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	Head->SetupAttachment(Body);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Sphere);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

}

//void APlayerPawn::BeginPlay() {
//	Super::BeginPlay();
//
//	playerController = Cast<APlayerController>(GetController());
//}
//
//void APlayerPawn::Tick(float deltaTime) {
//	Super::Tick(deltaTime);
//
//	if (playerController) {
//
//	}
//}

//void APlayerPawn::MoveForward(float Value)
//{
//	FVector DeltaLocation(0.0f);
//	//X = Value * DeltaTime * Speed
//	DeltaLocation.X = Value * 30 * UGameplayStatics::GetWorldDeltaSeconds(this); // making our movement frame independent
//	AddActorLocalOffset(DeltaLocation, true);
//
//	UE_LOG(LogTemp, Display, TEXT("w"));
//
//}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis(TEXT("PlayerAxisMappings"), this, &APlayerPawn::MoveForward);

}

