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
    UFUNCTION()
    void WaitForRandomizedRooms();
    
    UFUNCTION()
    void UnregisterClient(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void StartIntroSequence();
    
private:
    UFUNCTION()
    void ReadyPlayer(const FUniqueNetIdRepl& PlayerId);
    
public:
    UFUNCTION()
    void RandomizedRoomLoadingComplete(ASBZLevelScriptActor* SubLevel);
    
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
    void OnPlayerBeginPlayState(ASBZPlayerController* PlayerController);
    
public:
    UFUNCTION()
    void OnAllPlayersReady(EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION()
    void NetworkDisconnected();
    
    UFUNCTION()
    void MoveToActionPhase();
    
    UFUNCTION()
    void IntroSequenceTimedOut();
    
private:
    UFUNCTION()
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION()
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION()
    void EndIntroSequence();
    
    UFUNCTION()
    void EnableReadyButton();
    
    UFUNCTION()
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerIdm, const FString& DisplayName);
    
    UFUNCTION()
    void ClientDisconnected(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void AutoReadyTimeout();
    
};

