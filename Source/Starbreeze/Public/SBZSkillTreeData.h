#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryBaseData.h"
#include "SBZSkillTreePair.h"
#include "SBZSkillTreeUpgradePair.h"
#include "SBZSkillTreeData.generated.h"

UCLASS(Blueprintable)
class USBZSkillTreeData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkillTreePair BaseSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSkillTreeUpgradePair> UpgradeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkillTreePair FinalSkill;
    
    USBZSkillTreeData();

};

