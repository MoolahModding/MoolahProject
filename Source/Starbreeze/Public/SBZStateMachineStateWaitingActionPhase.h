#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingActionPhase.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataWaitActionPhase;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhase : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataWaitActionPhase* WaitingActionPhaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TravelToHostTimer;
    
public:
    USBZStateMachineStateWaitingActionPhase();

protected:
    UFUNCTION(BlueprintCallable)
    void TravelToHostTimeout();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void DelayedNetworkBeaconError();
    
    UFUNCTION(BlueprintCallable)
    void ConsumePreplanningAssets();
    
};

