#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZDsStateMachineState.h"
#include "SBZStateMachineStateDsResult.generated.h"

class USBZWidgetBase;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsResult : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ResultStateTimerHandler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResultStateTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestartAcceptTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestartInitiateTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* ResultWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerRequestedRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RestartAcceptTimerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RestartLevelTimerHandler;
    
public:
    USBZStateMachineStateDsResult();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRestartTimerFinsihed();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartLevelTimeExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartAcceptTimerFinsihed();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartAccepted(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void DestinationMapLoaded(UWorld* NewWorld);
    
};

