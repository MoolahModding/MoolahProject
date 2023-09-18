#pragma once
#include "CoreMinimal.h"
#include "SBZSuitPartConfigGroup.h"
#include "SBZSuitConfigModDataMap.generated.h"

class USBZModularPartSlotBase;

USTRUCT(BlueprintType)
struct FSBZSuitConfigModDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZSuitPartConfigGroup> ModDataMap;
    
    STARBREEZE_API FSBZSuitConfigModDataMap();
};

