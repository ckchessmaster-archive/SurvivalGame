// Fill out your copyright notice in the Description page of Project Settings.

#include "public/WorldGrid.h"


// Sets default values
AWorldGrid::AWorldGrid()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy"));
	RootComponent = DummyRoot;

	GridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GridMesh"));
	GridMesh->SetupAttachment(DummyRoot);
}

// Called when the game starts or when spawned
void AWorldGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

