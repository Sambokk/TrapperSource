// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"
#include "Kismet/GameplayStatics.h"
#include "Framework/TrapperGameMode.h"

// Sets default values for this component's properties
UHealth::UHealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealth::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealth::DamageTaken);
	TrapperGameMode = Cast<ATrapperGameMode>(UGameplayStatics::GetGameMode(this));

}


// Called every frame
void UHealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealth::DamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser)
{
	if(Damage <= 0.f) return;

	Health -= Damage;

	if (Health <= 0.f && TrapperGameMode)
	{
		//TrapperGameMode->ActorDied()
	}
}

