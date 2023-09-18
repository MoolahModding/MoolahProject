#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZSpawnNotifyOnce.generated.h"

class AActor;
class APawn;
class ASBZPawnSpawnPredefined;

UCLASS(Blueprintable)
class ASBZSpawnNotifyOnce : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPawnSpawnPredefined* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnNotifyReactors;
    
public:
    ASBZSpawnNotifyOnce(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnComplete(APawn* SpawnedPawn);
    
};

