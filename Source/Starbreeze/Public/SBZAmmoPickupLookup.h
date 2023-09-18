#pragma once
#include "CoreMinimal.h"
#include "SBZAmmoPickupLookup.generated.h"

class ASBZAmmoPickup;

USTRUCT(BlueprintType)
struct FSBZAmmoPickupLookup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAmmoPickup* Actor;
    
    STARBREEZE_API FSBZAmmoPickupLookup();
};

