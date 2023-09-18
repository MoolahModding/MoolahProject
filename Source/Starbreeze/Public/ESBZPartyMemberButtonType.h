#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyMemberButtonType.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyMemberButtonType : uint8 {
    PartyMember,
    InviteIncoming,
    InviteOutgoing,
};

