#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZPawnSpawnGroup.generated.h"

class ASBZPawnSpawnBase;
class ASBZRoomVolume;

UCLASS(Abstract, Blueprintable)
class ASBZPawnSpawnGroup : public AActor, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPawnSpawnBase*> PawnSpawnArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* SpawnGroupRoom;
    
public:
    ASBZPawnSpawnGroup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnSpawnDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

