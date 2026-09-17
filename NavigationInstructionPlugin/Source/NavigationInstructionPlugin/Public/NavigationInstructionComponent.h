// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NavigationInstructionComponent.generated.h"


class UNiagaraSystem;
class UNavigationQueryFilter;
class UNavigationSystemV1;
class USplineComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NAVIGATIONINSTRUCTIONPLUGIN_API UNavigationInstructionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNavigationInstructionComponent();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NavigationInstructionComponent")
	FVector PathStart;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NavigationInstructionComponent")
	FVector PathEnd;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NavigationInstructionComponent")
	float Spacing = 300;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NavigationInstructionComponent")
	TObjectPtr<UNiagaraSystem> NiagaraFX;
	
	TArray<FVector> PathPoints;
	USplineComponent* SplineComponent;
	
	//UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NavigationInstructionComponent")
	//TSubclassOf<UNavigationQueryFilter> FilterClass=nullptr;
	
	UNavigationSystemV1* NavigationSystem;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void DrawNavigationInstruction();
	UFUNCTION( BlueprintCallable, Category = "NavigationInstructionComponent" )
	void StatNavigationInstruction();
	//UFUNCTION( BlueprintCallable, Category = "NavigationInstructionComponent" )
	//暂时废弃
	void EndNavigationInstruction();

		
};
