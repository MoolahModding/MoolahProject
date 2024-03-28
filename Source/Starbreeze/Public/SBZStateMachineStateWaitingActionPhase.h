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
    UFUNCTION()
    void TravelToHostTimeout();
    
    UFUNCTION()
    void HandlePlayerControllerReady();
    
    UFUNCTION()
    void HandleNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION()
    void HandleJoinedHost(UWorld* NewWorld);
    
    UFUNCTION()
    void HandleGameStateReady();
    
    UFUNCTION()
    void HandleBeaconNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION()
    void DelayedNetworkBeaconError();
    
    UFUNCTION()
    void ConsumePreplanningAssets();
    
};

