#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBreakableInterface.h"
#include "SBZReplicatedIntStateActor.generated.h"

UCLASS(Blueprintable)
class ASBZReplicatedIntStateActor : public AActor, public ISBZBreakableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    int32 State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayStateFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientStateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IntStateReactorArray;
    
public:
    ASBZReplicatedIntStateActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(int32 NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(int32 NewState, bool bDoCosmetics);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(int32 OldState, int32 NewState, bool bDoCosmetics);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(int32 OldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(int32 NewState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseState(bool bDoCosmetics);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DecreaseState(bool bDoCosmetics);
    

    // Fix for true pure virtual functions not being implemented
};

