#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPD3MiniGameState.h"
#include "ESBZModuleActorState.h"
#include "SBZModuleActorStateChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZModuleActor.generated.h"

class ASBZCuttableActor;
class ASBZGate;
class ASBZHackingMinigameActor;

UCLASS(Blueprintable)
class ASBZModuleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZModuleActorStateChangedDelegate OnStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHackingMinigameActor*> HackingModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZCuttableActor*> CuttingModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustHackAllModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustCutAllModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZCuttableActor> DefaultCuttingModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZHackingMinigameActor> DefaultHackingModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZGate* ConnectedGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESBZModuleActorState CurrentState;
    
public:
    ASBZModuleActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnServerHackingStateChanged(EPD3MiniGameState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnServerCuttingComplete(ASBZCuttableActor* CuttableActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(ESBZModuleActorState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZModuleActorState NewState, bool bDoCosmetics);
    
};

