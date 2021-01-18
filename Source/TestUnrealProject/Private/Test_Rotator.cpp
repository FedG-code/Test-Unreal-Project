// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Rotator.h"

// Sets default values for this component's properties
UTest_Rotator::UTest_Rotator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTest_Rotator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTest_Rotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FRotator OwnerRotator = GetOwner()->GetActorRotation();
	OwnerRotator.Add(0.0f, DeltaTime*TurnSpeed, 0.0f);
	GetOwner()->SetActorRotation(OwnerRotator);
	// ...
}

