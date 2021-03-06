// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicBoyLogComponent.h"

// Sets default values for this component's properties
UBasicBoyLogComponent::UBasicBoyLogComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//UE_LOG(LogTemp, Error, TEXT("Component Created"));

	// ...
}


// Called when the game starts
void UBasicBoyLogComponent::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("UBasicBoyLogComponent::BeginPlay %s"), *DataString);
	// ...
	
}


// Called every frame
void UBasicBoyLogComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

