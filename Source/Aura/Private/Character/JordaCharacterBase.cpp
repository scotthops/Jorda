// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/JordaCharacterBase.h"

// Sets default values
AJordaCharacterBase::AJordaCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AJordaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


