#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTService_PlaceActor.h"
#include "Templates/SubclassOf.h"
#include "SBZBTService_PlaceMines.generated.h"

class ASBZAITaserMine;

UCLASS(Blueprintable)
class USBZBTService_PlaceMines : public USBZBTService_PlaceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAITaserMine> PlacedMine;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval EnemyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWallAndMineDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToMinesZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxMinesPlaced;
    
public:
    USBZBTService_PlaceMines();

};

