#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PD3SecuritySettingDataModifiers.generated.h"

class UPD3SpawnSquadPawn;

UCLASS(Blueprintable)
class UPD3SecuritySettingDataModifiers : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPD3SpawnSquadPawn*, UPD3SpawnSquadPawn*> SwappedSpawnGroups;
    
    UPD3SecuritySettingDataModifiers();

};

