#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZOnDestroyActorsDoneDynamicDelegateDelegate.h"
#include "SBZDestroyGroup.generated.h"

UCLASS(Blueprintable)
class ASBZDestroyGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnDestroyActorsDoneDynamicDelegate OnDestroyActorsDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToDestroy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval NumOfActorsToDestroyPerDifficulty[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDestroyOnBeginplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasDestroyedActors, meta=(AllowPrivateAccess=true))
    bool bHasDestroyedNonReplicatedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    ASBZDestroyGroup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HasDestroyedActors(bool OldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DestroyActors();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DestroyActors(TArray<AActor*>& KeptActors, TArray<AActor*>& DestroyedActors);
    
};

