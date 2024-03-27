#pragma once
#include "CoreMinimal.h"
#include "SBZOnHogTiedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnHogTied, ASBZAICharacter*, Character, bool, bHogTied);

