#pragma once
#include "CoreMinimal.h"
#include "SBZExplosiveLevelProp.h"
#include "SBZOnChargesChangedDelegateDelegate.h"
#include "SBZExplosiveChargesLevelProp.generated.h"

UCLASS(Blueprintable)
class ASBZExplosiveChargesLevelProp : public ASBZExplosiveLevelProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnChargesChangedDelegate ServerOnChargesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfExplosivesToPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelExplosiveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsExploded, meta=(AllowPrivateAccess=true))
    bool bIsExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PlacedExplosives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    ASBZExplosiveChargesLevelProp();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bInIsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsExploded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void IncrementPlacedExplosiveCount();
    
    UFUNCTION(BlueprintCallable)
    void DecrementPlacedExplosiveCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EnabledChanged(bool bEnabled, bool bDoCosmetics);
    
};

