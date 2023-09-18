#pragma once
#include "CoreMinimal.h"
#include "SBZVariationDataIndexTracker.generated.h"

class USBZVariationSetData;

USTRUCT(BlueprintType)
struct FSBZVariationDataIndexTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USBZVariationSetData> VariationData;
    
    STARBREEZE_API FSBZVariationDataIndexTracker();
};

