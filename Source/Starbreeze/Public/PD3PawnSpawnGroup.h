#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGroupSpawnedPawnDelegateBPDelegate.h"
#include "SBZPawnSpawnGroup.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "PD3PawnSpawnGroup.generated.h"

class APawn;
class ASBZPawnSpawnBase;

UCLASS(Blueprintable)
class APD3PawnSpawnGroup : public ASBZPawnSpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGroupSpawnedPawnDelegateBP OnPawnSpawnedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledForAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledForCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedPawnTypeContainer;
    
public:
    APD3PawnSpawnGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabledForCivilians(bool bInIsEnabledForCivilians);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledForAssault(bool bInIsEnabledForAssault);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnFinished(const FSBZPawnSpawnRequestHandle& Handle, APawn* Pawn, ASBZPawnSpawnBase* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnDie(APawn* Pawn);
    
};

