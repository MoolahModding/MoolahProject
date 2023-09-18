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

    UFUNCTION(BlueprintCallable)
    void UnregisterClient(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerStartTravel(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerReadyReceived(const FUniqueNetIdRepl& ReadyPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayersReadyTimerComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void IntroSequenceTimeout();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName);
    
private:
    UFUNCTION(BlueprintCallable)
    void CleanState();
    
public:
    UFUNCTION(BlueprintCallable)
    void BlackScreenDoneTimeout();
    
    UFUNCTION(BlueprintCallable)
    void AutoReadyTimeout();
    
};

