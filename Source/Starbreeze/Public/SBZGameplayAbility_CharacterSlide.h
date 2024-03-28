#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZGameplayAbility_CharacterSlide.generated.h"

class USBZCharacterMovementComponent;

UCLASS(Blueprintable)
class USBZGameplayAbility_CharacterSlide : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementComponent* MovementComponent;
    
public:
    USBZGameplayAbility_CharacterSlide();
};

