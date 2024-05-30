#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZStatisticCriteriaData.h"
#include "SBZNoBagOfTypeStatisticCriteriaData.generated.h"

UCLASS(Blueprintable)
class USBZNoBagOfTypeStatisticCriteriaData : public USBZStatisticCriteriaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BagTypeTagsToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRequiredSecuredBags;
    
public:
    USBZNoBagOfTypeStatisticCriteriaData();

};

