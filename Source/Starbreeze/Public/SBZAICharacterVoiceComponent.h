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
    USBZAICharacterVoiceComponent();
private:
    UFUNCTION()
    void HandleOnHostageStateChanged(uint8 HostageState);
    
    UFUNCTION()
    void HandleHumanShieldChanged(ASBZAICharacter* Victim, ASBZCharacter* Instigator, bool bHumanShield);
    
    UFUNCTION()
    void HandleAIBehaviorCategoryChanged(ESBZAIBehaviorCategory OldCategory, ESBZAIBehaviorCategory NewCategory);
    
};

