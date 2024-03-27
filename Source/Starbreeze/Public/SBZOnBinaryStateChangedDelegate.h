#pragma once
#include "CoreMinimal.h"
#include "SBZOnBinaryStateChangedDelegate.generated.h"

class ASBZBinaryStateNode;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnBinaryStateChanged, ASBZBinaryStateNode*, BinaryStateNode, bool, bState);

