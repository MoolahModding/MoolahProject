#pragma once
#include "CoreMinimal.h"
#include "SBZHealthPlaceable.h"
#include "SBZFirstAidPack.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZFirstAidPack : public ASBZHealthPlaceable {
    GENERATED_BODY()
public:
    ASBZFirstAidPack();
};

