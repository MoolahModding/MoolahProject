#pragma once
#include "CoreMinimal.h"
#include "ESBZAIBehaviorCategory.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZAICharacterVoiceComponent.generated.h"

class ASBZAICharacter;
class ASBZCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAICharacterVoiceComponent : public USBZCharacterVoiceComponent {
    GENERATED_BODY()
public:
    USBZAICharacterVoiceComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnHostageStateChanged(uint8 HostageState);
    
    UFUNCTION(BlueprintCallable)
    void HandleHumanShieldChanged(ASBZAICharacter* Victim, ASBZCharacter* Instigator, bool bHumanShield);
    
    UFUNCTION(BlueprintCallable)
    void HandleAIBehaviorCategoryChanged(ESBZAIBehaviorCategory OldCategory, ESBZAIBehaviorCategory NewCategory);
    
};

