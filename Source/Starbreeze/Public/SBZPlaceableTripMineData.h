#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZToolData.h"
#include "Templates/SubclassOf.h"
#include "SBZPlaceableTripMineData.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlaceableTripMineData : public USBZToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalPlayerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DurationTag;
    
    USBZPlaceableTripMineData();

};

