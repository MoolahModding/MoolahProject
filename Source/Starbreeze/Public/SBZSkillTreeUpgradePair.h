#pragma once
#include "CoreMinimal.h"
#include "SBZSkillTreePair.h"
#include "SBZSkillTreeUpgradePair.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillTreeUpgradePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkillTreePair UpgradeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkillTreePair UpgradeB;
    
    STARBREEZE_API FSBZSkillTreeUpgradePair();
};

