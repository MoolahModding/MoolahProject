#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAnimationSpawnedActorCPD.h"
#include "SBZPoolableActorInterface.h"
#include "SBZCosmeticProp.generated.h"

UCLASS(Blueprintable)
class ASBZCosmeticProp : public AActor, public ISBZPoolableActorInterface {
    GENERATED_BODY()
public:
    ASBZCosmeticProp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveCPDs(const TArray<FSBZAnimationSpawnedActorCPD>& CPDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDropped();
    

    // Fix for true pure virtual functions not being implemented
};

