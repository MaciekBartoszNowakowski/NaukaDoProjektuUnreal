// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Overlay.h"
#include "CustomEqButton.generated.h"

/**
 * 
 */
UCLASS()
class NAUKADOKOLA_API UCustomEqButton : public UUserWidget
{
	GENERATED_BODY()

public:
    UPROPERTY(meta = (BindWidget))
    UButton* Button;

    UPROPERTY(meta = (BindWidget))
    UOverlay* ChildContainer;

 
    UFUNCTION(BlueprintCallable)
    void AddChildToCustomButton(UWidget* Content)
    {
        if (ChildContainer && Content)
        {
            ChildContainer->AddChild(Content);
        }
    }
	
};

