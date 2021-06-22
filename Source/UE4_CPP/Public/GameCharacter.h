// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

UCLASS()
class UE4_CPP_API AGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="MyCategory")
	FString Myname;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyCategory")
	FString BaseMesh;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;  //ÀRºAºô®æÅé (Ä~©Ó)


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
