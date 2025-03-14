#pragma once
#include "CoreMinimal.h"
#include "SBZOverskillLoadoutConfig.generated.h"

class USBZOverskillLoadoutData;

USTRUCT(BlueprintType)
struct FSBZOverskillLoadoutConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOverskillLoadoutData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillLoadoutData* OriginalData;
    
    STARBREEZE_API FSBZOverskillLoadoutConfig();
};

