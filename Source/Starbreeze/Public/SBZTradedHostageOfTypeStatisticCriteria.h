#pragma once
#include "CoreMinimal.h"
#include "SBZHostageTradeData.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZTradedHostageOfTypeStatisticCriteria.generated.h"

UCLASS(Blueprintable)
class USBZTradedHostageOfTypeStatisticCriteria : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHostageTradeData HostageTradeCountRequirement;
    
public:
    USBZTradedHostageOfTypeStatisticCriteria();

};

