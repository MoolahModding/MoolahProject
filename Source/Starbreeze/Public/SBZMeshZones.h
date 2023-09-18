#pragma once
#include "CoreMinimal.h"
#include "SBZMeshZones.generated.h"

class UMeshComponent;
class USBZPersistentWorldDamageZoneComponent;

USTRUCT(BlueprintType)
struct FSBZMeshZones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMeshComponent> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZPersistentWorldDamageZoneComponent>> Zones;
    
    STARBREEZE_API FSBZMeshZones();
};

