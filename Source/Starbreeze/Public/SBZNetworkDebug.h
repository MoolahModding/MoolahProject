#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SBZNetworkDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZNetworkDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZNetworkDebug(const FObjectInitializer& ObjectInitializer);

};

