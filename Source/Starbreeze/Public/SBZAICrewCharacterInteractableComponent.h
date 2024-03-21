#pragma once
#include "CoreMinimal.h"
#include "ESBZAICrewCharacterInteractableMode.h"
#include "SBZCharacterInteractableComponent.h"
#include "SBZInteractableModeData.h"
#include "SBZAICrewCharacterInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAICrewCharacterInteractableComponent : public USBZCharacterInteractableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESBZAICrewCharacterInteractableMode> ModeArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractableModeData ModeDataArray[4];
    
public:
    USBZAICrewCharacterInteractableComponent();
};

