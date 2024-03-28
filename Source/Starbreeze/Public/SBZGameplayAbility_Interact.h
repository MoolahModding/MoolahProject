#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZGameplayAbility_Interact.generated.h"

class USBZPlayerInteractorComponent;

UCLASS(Blueprintable)
class USBZGameplayAbility_Interact : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerInteractorComponent* Interactor;
    
public:
    USBZGameplayAbility_Interact();
};

