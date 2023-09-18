#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZToolData.h"
#include "SBZPlaceableTripMineData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZPlaceableTripMineData : public USBZToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalPlayerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DurationTag;
    
    USBZPlaceableTripMineData();

};

