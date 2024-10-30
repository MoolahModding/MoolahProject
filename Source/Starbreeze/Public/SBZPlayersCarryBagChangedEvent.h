#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayersCarryBagChangedEvent.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZPlayersCarryBagChangedEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* BagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoCosmetics;
    
    STARBREEZE_API FSBZPlayersCarryBagChangedEvent();
};

