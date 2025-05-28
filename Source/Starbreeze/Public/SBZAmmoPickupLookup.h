#pragma once
#include "CoreMinimal.h"
#include "SBZAmmoPickupLookup.generated.h"

class ASBZAmmoPickup;
class ASBZPlayerState;

USTRUCT(BlueprintType)
struct FSBZAmmoPickupLookup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAmmoPickup* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* KillerPlayerState;
    
    STARBREEZE_API FSBZAmmoPickupLookup();
};

