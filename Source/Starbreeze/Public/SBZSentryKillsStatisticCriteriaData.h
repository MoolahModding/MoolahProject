#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZSentryKillsStatisticCriteriaData.generated.h"

UCLASS(Blueprintable)
class USBZSentryKillsStatisticCriteriaData : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SentryKills;
    
    USBZSentryKillsStatisticCriteriaData();
};

