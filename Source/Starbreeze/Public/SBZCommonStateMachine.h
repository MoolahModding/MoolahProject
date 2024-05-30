#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachine.h"
#include "SBZCommonStateMachine.generated.h"

class ASBZPlayerState;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZCommonStateMachine : public USBZStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerState*> PlayersReadyStatus;
    
    USBZCommonStateMachine();

};

