#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZMeshZones.h"
#include "SBZPersistentWorldDamageZoneManager.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class STARBREEZE_API ASBZPersistentWorldDamageZoneManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMeshZones> MeshZonesMap;
    
public:
    ASBZPersistentWorldDamageZoneManager(const FObjectInitializer& ObjectInitializer);

};

