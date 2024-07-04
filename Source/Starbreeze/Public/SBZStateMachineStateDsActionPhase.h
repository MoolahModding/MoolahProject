#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZDsStateMachineState.h"
#include "SBZEndMissionResultData.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateDsActionPhase.generated.h"

class USBZStateMachineDataActionPhase;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZStateMachineStateDsActionPhase : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataActionPhase* ActionPhaseData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialLongTimeoutDelay;
    
public:
    USBZStateMachineStateDsActionPhase();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerStartTravel(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd(const int32 OutroVariation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void AutoReadyTimeout();
    
};

