#pragma once
#include "CoreMinimal.h"
#include "SBZOverskillProgressData.generated.h"

USTRUCT(BlueprintType)
struct FSBZOverskillProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZOverskillProgressData();
};

