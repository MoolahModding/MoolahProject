#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlaceableToolPlacedData.generated.h"

class ASBZCharacter;
class ASBZPlaceableToolBase;

USTRUCT(BlueprintType)
struct FSBZPlaceableToolPlacedData : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlaceableToolBase* PlaceableTool;
    
    STARBREEZE_API FSBZPlaceableToolPlacedData();
};

