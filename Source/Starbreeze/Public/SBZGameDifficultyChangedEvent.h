#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZGameDifficultyChangedEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameDifficultyChangedEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DifficultyIdx;
    
    STARBREEZE_API FSBZGameDifficultyChangedEvent();
};

