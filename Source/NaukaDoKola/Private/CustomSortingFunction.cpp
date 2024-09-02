// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomSortingFunction.h"


void UCustomSortingFunction::SortEditableTextArrayByMyIntVariable(TArray<UCustomEditableText*>& ArrayToSort)
{
	ArrayToSort.Sort([](const UCustomEditableText& A, const UCustomEditableText& B)
		{
			return A.MyIndeks < B.MyIndeks;
		});
}