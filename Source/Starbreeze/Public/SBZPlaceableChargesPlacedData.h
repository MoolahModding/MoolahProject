#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlaceableChargesPlacedData.generated.h"

class ASBZCharacter;
class ASBZPlaceableCharges;

USTRUCT(BlueprintType)
struct FSBZPlaceableChargesPlacedData : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlaceableCharges* PlaceableCharge;
    
    STARBREEZE_API FSBZPlaceableChargesPlacedData();
};

