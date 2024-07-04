#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZSecuredBagTypeStatisticCriteria.generated.h"

UCLASS(Blueprintable)
class USBZSecuredBagTypeStatisticCriteria : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BagTypeTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSecuredCount;
    
public:
    USBZSecuredBagTypeStatisticCriteria();

};

