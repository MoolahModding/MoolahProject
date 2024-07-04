#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZBinaryStateChangedSignatureDelegate.h"
#include "SBZBinaryStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZBinaryStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBinaryStateChangedSignature OnStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    uint8 bState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayStateFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientStateDelay;
    
public:
    USBZBinaryStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleState(bool bDoCosmetics);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(bool bNewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(bool bNewState, bool bDoCosmetics);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(bool bOldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(bool bNewState);
    
};

