#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZPlaceToolTargetData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSBZPlaceToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AttachParent;
    
public:
    STARBREEZE_API FSBZPlaceToolTargetData();
};

