#pragma once
#include "CoreMinimal.h"
#include "ESBZFacialEmotion.h"
#include "SBZPhoneme.h"
#include "SBZDialogAnimData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FSBZDialogAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PhonemeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFacialEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFacialEmotion FacialEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPhoneme> Phonemes;
    
    STARBREEZE_API FSBZDialogAnimData();
};

