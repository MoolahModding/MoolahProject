#pragma once
#include "CoreMinimal.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZAIAbilitySystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIAbilitySystemComponent : public USBZAbilitySystemComponent {
    GENERATED_BODY()
public:
    USBZAIAbilitySystemComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyHurtInterrupt(const FSBZHurtReactionPrediction& HurtReactionPrediction);
    
};

