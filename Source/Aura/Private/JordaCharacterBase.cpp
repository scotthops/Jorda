// Fill out your copyright notice in the Description page of Project Settings.


#include "JordaCharacterBase.h"

// Sets default values
AJordaCharacterBase::AJordaCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJordaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJordaCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJordaCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

