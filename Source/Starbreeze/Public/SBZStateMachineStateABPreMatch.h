#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "ETLMVoiceSessionState.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateABPreMatch.generated.h"

class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateABPreMatch : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
public:
    USBZStateMachineStateABPreMatch();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyStatusUpdated(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinVoiceSessionComplete(const FString& SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnGetVoiceSessionStateComplete(const FString& SessionName, const ETLMVoiceSessionState VoiceSessionState);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateVoiceSessionComplete(const FString& SessionName, const FString& SharedSessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void HandleReceivedPlayerReadyAck();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyStateUpdated(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializeTravel();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconDisconnect();
    
    UFUNCTION(BlueprintCallable)
    void DelayedTravelToServer();
    
};

