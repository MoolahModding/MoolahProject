#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZStateMachineStateSoloPreMatch.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateSoloPreMatch : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateSoloPreMatch();

    UFUNCTION(BlueprintCallable)
    bool SetPlayerReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerLoadoutChanged(const FSBZPlayerLoadoutConfig& PlayerLoadout, int32 PlayerLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveLoadoutIndexChanged(int32 NewActiveLoadoutIndex);
    
};

