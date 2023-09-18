#pragma once
#include "CoreMinimal.h"
#include "ESBZAICharacterInteractableMode.h"
#include "SBZCharacterInteractableComponent.h"
#include "SBZInteractableModeData.h"
#include "SBZAICharacterInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAICharacterInteractableComponent : public USBZCharacterInteractableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESBZAICharacterInteractableMode> ModeArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractableModeData ModeDataArray[11];
    
public:
    USBZAICharacterInteractableComponent();

};

