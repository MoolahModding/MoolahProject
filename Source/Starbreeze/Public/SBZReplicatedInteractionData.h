#pragma once
#include "CoreMinimal.h"
#include "SBZReplicatedInteractionData.generated.h"

class USBZBaseInteractableComponent;

USTRUCT(BlueprintType)
struct FSBZReplicatedInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* CurrentInteraction;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 ModeIndex;
    
    STARBREEZE_API FSBZReplicatedInteractionData();
};

