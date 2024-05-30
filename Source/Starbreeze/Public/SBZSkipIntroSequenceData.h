#pragma once
#include "CoreMinimal.h"
#include "SBZSkipIntroSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkipIntroSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SkipArray;
    
    STARBREEZE_API FSBZSkipIntroSequenceData();
};

