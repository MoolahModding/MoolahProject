#pragma once
#include "CoreMinimal.h"
#include "SBZOverskillProgressResultData.generated.h"

class USBZOverskillData;

USTRUCT(BlueprintType)
struct FSBZOverskillProgressResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Level;
    
    STARBREEZE_API FSBZOverskillProgressResultData();
};

