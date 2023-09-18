#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZClientStateMachineState.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateActionPhase.generated.h"

class ASBZPlayerController;
class USBZActionPhaseBaseWidget;
class USBZStateMachineDataActionPhase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateActionPhase : public USBZClientStateMachineState {
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
    USBZStateMachineStateActionPhase();

    UFUNCTION(BlueprintCallable)
    void PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateChanged(ASBZPlayerController* PlayerController, const FName& OldStateName, const FName& NewStateName);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd(const int32 OutroVariation);
    
private:
    UFUNCTION(BlueprintCallable)
    void DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName);
    
public:
    UFUNCTION(BlueprintCallable)
    void BlackScreenDoneTimeout();
    
    UFUNCTION(BlueprintCallable)
    void AutoReadyTimeout();
    
};

