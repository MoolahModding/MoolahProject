#pragma once
#include "CoreMinimal.h"
#include "SBZCheckInteractableScreenInputData.generated.h"

class USBZAgentManager;
class USBZInteractorComponent;

USTRUCT(BlueprintType)
struct FSBZCheckInteractableScreenInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractorComponent* Interactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAgentManager* AgentManager;
    
    STARBREEZE_API FSBZCheckInteractableScreenInputData();
};

