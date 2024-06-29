#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZSecuredBagStatisticCriteria.generated.h"

UCLASS(Blueprintable)
class USBZSecuredBagStatisticCriteria : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSecuredCount;
    
public:
    USBZSecuredBagStatisticCriteria();

};

