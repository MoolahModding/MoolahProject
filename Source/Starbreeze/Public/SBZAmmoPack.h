#pragma once
#include "CoreMinimal.h"
#include "SBZAmmoBag.h"
#include "SBZAmmoPack.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZAmmoPack : public ASBZAmmoBag {
    GENERATED_BODY()
public:
    ASBZAmmoPack(const FObjectInitializer& ObjectInitializer);

};

