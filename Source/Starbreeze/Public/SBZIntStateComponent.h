#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZIntStateChangedSignatureDelegate.h"
#include "SBZIntStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZIntStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZIntStateChangedSignature OnStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayStateFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientStateDelay;
    
public:
    USBZIntStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(int32 NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(int32 NewState, bool bDoCosmetics);
    
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

