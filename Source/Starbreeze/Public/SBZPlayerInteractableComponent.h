#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerInteractableMode.h"
#include "SBZCharacterInteractableComponent.h"
#include "SBZInteractableModeData.h"
#include "SBZPlayerInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPlayerInteractableComponent : public USBZCharacterInteractableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESBZPlayerInteractableMode> ModeArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractableModeData ModeDataArray[3];
    
public:
    USBZPlayerInteractableComponent();

};

