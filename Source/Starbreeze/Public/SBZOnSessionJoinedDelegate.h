#pragma once
#include "CoreMinimal.h"
#include "SBZOnSessionJoinedDelegate.generated.h"

class UWorld;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSessionJoined, UWorld*, InWorld);

