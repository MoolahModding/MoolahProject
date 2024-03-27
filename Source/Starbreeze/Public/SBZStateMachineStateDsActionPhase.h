#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZDsStateMachineState.h"
#include "SBZEndMissionResultData.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateDsActionPhase.generated.h"

class USBZActionPhaseBaseWidget;
class USBZStateMachineDataActionPhase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsActionPhase : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActionPhaseBaseWidget* ActionPhaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataActionPhase* ActionPhaseData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialLongTimeoutDelay;
    
public:
    USBZStateMachineStateDsActionPhase();
protected:
    UFUNCTION()
    void PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId);
    
    UFUNCTION()
    void PlayerStartTravel(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId);
    
private:
    UFUNCTION()
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION()
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION()
    void HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData);
    
    UFUNCTION()
    void HandleMissionEnd(const int32 OutroVariation);
    
protected:
    UFUNCTION()
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName);
    
    UFUNCTION()
    void AutoReadyTimeout();
    
};

