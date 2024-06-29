#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBreakableInterface.h"
#include "SBZReplicatedBinaryStateActor.generated.h"

UCLASS(Blueprintable)
class ASBZReplicatedBinaryStateActor : public AActor, public ISBZBreakableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    uint8 bState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayStateFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientStateDelay;
    
public:
    ASBZReplicatedBinaryStateActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(bool bNewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(bool bNewState, bool bDoCosmetics);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(bool bStateToChangeTo, bool bDoCosmetics);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(bool bOldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(bool bNewState);
    

    // Fix for true pure virtual functions not being implemented
};

