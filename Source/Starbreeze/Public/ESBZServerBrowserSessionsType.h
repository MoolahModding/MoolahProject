#pragma once
#include "CoreMinimal.h"
#include "ESBZServerBrowserSessionsType.generated.h"

UENUM(BlueprintType)
enum ESBZServerBrowserSessionsType {
    Mixed,
    APIOnly,
    FriendsOnly,
};

