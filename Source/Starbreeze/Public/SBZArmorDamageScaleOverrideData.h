#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZArmorDamageScaleOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorDamageScaleOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Override;
    
    STARBREEZE_API FSBZArmorDamageScaleOverrideData();
};

