#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SBZHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ASBZHUDBase();
private:
    UFUNCTION()
    void DelayedHudInitizalize();
    
};

