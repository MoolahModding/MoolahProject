#pragma once
#include "CoreMinimal.h"
#include "SBZActorSpawnTransforms.h"
#include "SBZSeasonalEventItemSpawner.generated.h"

class USBZActorSpawnRequestData;

UCLASS(Blueprintable)
class ASBZSeasonalEventItemSpawner : public ASBZActorSpawnTransforms {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActorSpawnRequestData* SpawnRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberToSpawn;
    
public:
    ASBZSeasonalEventItemSpawner();
};

