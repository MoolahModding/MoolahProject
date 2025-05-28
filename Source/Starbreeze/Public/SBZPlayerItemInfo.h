#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeObjectiveInfo.h"
#include "SBZPlayerItemInfo.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZPlayerItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZChallengeObjectiveInfo ChallengeObjectiveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    STARBREEZE_API FSBZPlayerItemInfo();
};

