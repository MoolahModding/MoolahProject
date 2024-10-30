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
    
    STARBREEZE_API FSBZOverskillLoadoutConfig();
};

