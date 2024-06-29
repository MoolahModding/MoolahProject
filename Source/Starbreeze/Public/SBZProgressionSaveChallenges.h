#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionSaveCachedChallengesData.h"
#include "SBZProgressionSaveChallengesData.h"
#include "SBZSaveGame.h"
#include "SBZProgressionSaveChallenges.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZProgressionSaveChallenges : public USBZSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProgressionSaveChallengesData ProgressionSaveChallengesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZProgressionSaveCachedChallengesData ProgressionSaveCachedChallengesData;
    
public:
    USBZProgressionSaveChallenges();

};

