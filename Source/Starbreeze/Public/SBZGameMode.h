#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "SBZGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient, Config=Engine)
class ASBZGameMode : public ASBZGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostKickPlayerRemovalDelay;
    
public:
    ASBZGameMode(const FObjectInitializer& ObjectInitializer);

};

