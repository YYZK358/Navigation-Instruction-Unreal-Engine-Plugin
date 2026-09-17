// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationInstructionComponent.h"

#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "Engine/World.h"



// Sets default values for this component's properties
UNavigationInstructionComponent::UNavigationInstructionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SplineComponent = CreateDefaultSubobject<USplineComponent>("NavigationInstruction");
	SplineComponent->SetVisibility(false);
	// ...

}


// Called when the game starts
void UNavigationInstructionComponent::BeginPlay()
{
	Super::BeginPlay();
	NavigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	// ...
	
}


// Called every frame
void UNavigationInstructionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UNavigationInstructionComponent::DrawNavigationInstruction()
{
	PathPoints.Reset();
	SplineComponent->ClearSplinePoints();
	SplineComponent->SetVisibility(true);
	PathPoints.Add(PathStart);
	
	if (NavigationSystem)
	{
		UNavigationPath* Path = NavigationSystem->FindPathToLocationSynchronously(this,PathStart,PathEnd,GetOwner(),nullptr);
		if (Path)
		{
			for (FVector &PathPoint : Path->PathPoints)
			{
				//FVector PathPoint = PathPoints[i];
				PathPoints.Add(PathPoint);
			}
			PathPoints.Add(PathEnd);
		}
	}
	for (FVector &PathPoint : PathPoints)
	{
		//FVector PathPoint = PathPoints[i];
		SplineComponent->AddSplineWorldPoint(PathPoint);
		if (NiagaraFX)
		{
			float SplineLength = SplineComponent->GetSplineLength();
			int32 PointNumber = SplineLength / FMath::Max(1,Spacing);
			for (int32 i = 1; i <= PointNumber; i++)
			{
				FVector Point =	SplineComponent->GetLocationAtDistanceAlongSpline(i*Spacing,ESplineCoordinateSpace::World);
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NiagaraFX, Point);
				
			}
		}
		//DrawDebugSphere(GetWorld(),PathPoint,10,10,FColor::Red,false,100);
	}

}

void UNavigationInstructionComponent::StatNavigationInstruction()
{
	DrawNavigationInstruction();
}

void UNavigationInstructionComponent::EndNavigationInstruction()
{
}

