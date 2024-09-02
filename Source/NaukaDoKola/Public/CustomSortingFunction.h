// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomEditableText.h"
#include "CustomSortingFunction.generated.h"


/**
 * 
 */
UCLASS()
class NAUKADOKOLA_API UCustomSortingFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Custom|Sorting")
	static void SortEditableTextArrayByMyIntVariable(UPARAM(ref) TArray<UCustomEditableText*>& ArrayToSort);
	
};
