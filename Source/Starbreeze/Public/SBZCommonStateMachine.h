#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachine.h"
#include "SBZCommonStateMachine.generated.h"

class ASBZPlayerState;
class UWorld;

UCLASS(Abstract, Blueprintable, Config=Starbreeze)
class STARBREEZE_API USBZCommonStateMachine : public USBZStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerState*> PlayersReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* ReturnToMainMenuInProgressWorld;
    
    USBZCommonStateMachine();

};

