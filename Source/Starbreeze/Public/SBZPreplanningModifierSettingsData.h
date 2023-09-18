#pragma once
#include "CoreMinimal.h"
#include "SBZPreplanningModifierSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPreplanningModifierSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PagerIncreaseAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HostageReduceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoPickupIncreasePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegotiationTimeIncrease;
    
    STARBREEZE_API FSBZPreplanningModifierSettingsData();
};

