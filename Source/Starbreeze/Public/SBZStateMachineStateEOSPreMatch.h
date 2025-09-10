#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "ETLMVoiceSessionState.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateEOSPreMatch.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateEOSPreMatch : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateEOSPreMatch();

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

