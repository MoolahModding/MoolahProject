#pragma once
#include "CoreMinimal.h"
#include "ESBZBreakableMachineInteractionMode.h"
#include "SBZInteractableComponent.h"
#include "SBZInteractableModeData.h"
#include "SBZBreakableMachineInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZBreakableMachineInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZBreakableMachineInteractionMode CurrentMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractableModeData ModeDataArray[4];
    
public:
    USBZBreakableMachineInteractableComponent(const FObjectInitializer& ObjectInitializer);

};

