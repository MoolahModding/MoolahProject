#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "SBZBuildNumberInterface.h"
#include "SBZGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient, Config=Engine)
class ASBZGameMode : public ASBZGameModeBase, public ISBZBuildNumberInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostKickPlayerRemovalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildNumber;
    
public:
    ASBZGameMode(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

