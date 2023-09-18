#pragma once
#include "CoreMinimal.h"
#include "SBZCashRewardData.h"
#include "SBZCharacterEndMissionExpBonusData.h"
#include "SBZCharacterEndMissionResultData.h"
#include "SBZSkillRewardData.h"
#include "SBZWeaponProgressionUpdateData.h"
#include "SBZPlayerEndMissionResultData.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZPlayerEndMissionResultData : public FSBZCharacterEndMissionResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerRewardsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCharacterEndMissionExpBonusData CharacterEndMissionExpBonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCashRewardData CashRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryBaseData*> RandomItemRewardArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponProgressionUpdateData> WeaponProgressionUpdateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSkillRewardData SkillRewardData;
    
    STARBREEZE_API FSBZPlayerEndMissionResultData();
};

