#pragma once
#include "CoreMinimal.h"
#include "SBZSuitConfigModDataMap.h"
#include "SBZSuitConfig.generated.h"

class USBZSuitBaseData;
class USBZSuitData;

USTRUCT(BlueprintType)
struct FSBZSuitConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitData* SuitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSuitData* OriginalSuitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitBaseData* SuitBaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSuitConfigModDataMap> ModDataMapArray;
    
    STARBREEZE_API FSBZSuitConfig();
};

