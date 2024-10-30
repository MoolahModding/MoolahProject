#pragma once
#include "CoreMinimal.h"
#include "ESBZConsumableInteractableMode.h"
#include "SBZInteractableComponent.h"
#include "SBZInteractableModeData.h"
#include "SBZConsumableInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZConsumableInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESBZConsumableInteractableMode> ModeArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractableModeData ModeDataArray[3];
    
public:
    USBZConsumableInteractableComponent(const FObjectInitializer& ObjectInitializer);

};

