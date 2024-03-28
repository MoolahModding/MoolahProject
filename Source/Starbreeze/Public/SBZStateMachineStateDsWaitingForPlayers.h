#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZDsStateMachineState.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateDsWaitingForPlayers.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsWaitingForPlayers : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersReadyTimeoutValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PlayersReadyTimer;
    
public:
    USBZStateMachineStateDsWaitingForPlayers();
    UFUNCTION()
    void UnregisterClient(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId);
    
    UFUNCTION()
    void PlayerStartTravel(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void PlayerReadyReceived(const FUniqueNetIdRepl& ReadyPlayerId);
    
    UFUNCTION()
    void PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId);
    
private:
    UFUNCTION()
    void OnPlayersReadyTimerComplete();
    
public:
    UFUNCTION()
    void IntroSequenceTimeout();
    
private:
    UFUNCTION()
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION()
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION()
    void EndIntroSequence();
    
    UFUNCTION()
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName);
    
private:
    UFUNCTION()
    void CleanState();
    
public:
    UFUNCTION()
    void BlackScreenDoneTimeout();
    
    UFUNCTION()
    void AutoReadyTimeout();
    
};

