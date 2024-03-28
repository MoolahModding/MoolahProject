#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAnimationSpawnedActorCPD.h"
#include "SBZPoolableActorInterface.h"
#include "SBZCosmeticProp.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class ASBZCosmeticProp : public AActor, public ISBZPoolableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshArray;
    
public:
    ASBZCosmeticProp();
    UFUNCTION(BlueprintNativeEvent)
    void OnReceiveCPDs(const TArray<FSBZAnimationSpawnedActorCPD>& CPDs);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDropped();
    
    
    // Fix for true pure virtual functions not being implemented
};

