// Fill out your copyright notice in the Description page of Project Settings.


#include "Golem.h"

// Sets default values
AGolem::AGolem()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGolem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGolem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGolem::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

