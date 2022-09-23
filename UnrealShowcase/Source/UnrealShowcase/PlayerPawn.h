// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class UNREALSHOWCASE_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

	/* bind input actions from player controller */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* sphere to use for root component and collision */
	UPROPERTY(EditAnywhere)
		class USphereComponent* Sphere;

	/* Static mesh for the body attached to the root */
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Body;

	/* Static mesh for the body attached to the body */
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Head;

	/* Spring arm to attach camera to root */
	UPROPERTY(EditAnywhere)
		class USpringArmComponent* SpringArm;

	/* Camera attached to spring arm to provide pawn's view */
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	/*APlayerController* playerController;

	virtual void Tick(float deltaTime) override;

	void MoveForward(float value);*/



//protected:
//
//	virtual void BeginPlay() override;

};
