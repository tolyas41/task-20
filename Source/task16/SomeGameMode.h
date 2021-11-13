// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SomeGameMode.generated.h"

DECLARE_EVENT(ASomeGameMode, FOnDamageEvent)
DECLARE_EVENT(ASomeGameMode, FOnDeathUnitEvent)

UCLASS()
class TASK16_API ASomeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	FOnDamageEvent OnDamageEvent;
	FOnDeathUnitEvent OnDeathUnitEvent;

	UFUNCTION(BlueprintCallable)
	void ChangeWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ExperienceBar;

	UPROPERTY()
	UUserWidget* CurrentWidget;
};
