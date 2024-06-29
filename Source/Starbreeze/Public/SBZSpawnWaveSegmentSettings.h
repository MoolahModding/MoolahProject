#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZSpawnWaveSegmentSettings.generated.h"

class APD3PawnSpawnGroup;
class ASBZPawnSpawnPredefined;
class UPD3PawnVariation;
class USBZAISquadOrder;

USTRUCT(BlueprintType)
struct FSBZSpawnWaveSegmentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPD3PawnVariation*> PawnVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APD3PawnSpawnGroup*> SpawnerGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAISquadOrder> SquadOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPawnSpawnPredefined*> SpecificSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    STARBREEZE_API FSBZSpawnWaveSegmentSettings();
};

