#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZReplicatedIntStateActor.generated.h"

UCLASS(Blueprintable)
class ASBZReplicatedIntStateActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayStateFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientStateDelay;
    
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
    
};

