#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "SBZKilledPawnSpawnPredefinedDelegateDelegate.h"
#include "SBZPawnSpawnBase.h"
#include "SBZPawnSpawnRequest.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "SBZSpawnRequestCompletedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZPawnSpawnPredefined.generated.h"

class AActor;
class ASBZCarriedStaticInteractionActor;

UCLASS(Blueprintable)
class ASBZPawnSpawnPredefined : public ASBZPawnSpawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpawningMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod OverridenSpawningMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRandomMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZCarriedStaticInteractionActor> SpawnLootClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZKilledPawnSpawnPredefinedDelegate KilledPawnDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PredefinedRequestActionActorRef;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnRequestCompletedDelegate SpawnedPawnDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnSpawnRequest PredefinedPawnRequest;
    
    ASBZPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnPredefinedMulti();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnPredefinedLatent(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    FSBZPawnSpawnRequestHandle SpawnPredefined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedTick();
    
};

