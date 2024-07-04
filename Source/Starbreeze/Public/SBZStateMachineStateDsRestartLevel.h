#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZDsStateMachineState.h"
#include "SBZPreplanningAsset.h"
#include "SBZStateMachineStateDsRestartLevel.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsRestartLevel : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPreplanningAsset> PreplanningAssets;
    
public:
    USBZStateMachineStateDsRestartLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnClientStartSeamlessTravel(const FUniqueNetIdRepl& PlayerId);
    
};

