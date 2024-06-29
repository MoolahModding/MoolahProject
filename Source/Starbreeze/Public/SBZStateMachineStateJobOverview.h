#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EBlackScreenTransitionType.h"
#include "SBZClientStateMachineState.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateJobOverview.generated.h"

class ASBZLevelScriptActor;
class ASBZPlayerController;
class USBZJobOverviewBaseWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateJobOverview : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZJobOverviewBaseWidget* JobOverviewWidget;
    
public:
    USBZStateMachineStateJobOverview();

    UFUNCTION(BlueprintCallable)
    void WaitForRandomizedRooms();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterClient(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void StartIntroSequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void ReadyPlayer(const FUniqueNetIdRepl& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RandomizedRoomLoadingComplete(ASBZLevelScriptActor* SubLevel);
    
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
    void OnPlayerBeginPlayState(ASBZPlayerController* PlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerStateReady();
    
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersReady(EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(BlueprintCallable)
    void NetworkDisconnected();
    
    UFUNCTION(BlueprintCallable)
    void MoveToActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void IntroSequenceTimedOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void EnableReadyButton();
    
    UFUNCTION(BlueprintCallable)
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerIdm, const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void ClientDisconnected(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void AutoReadyTimeout();
    
};

