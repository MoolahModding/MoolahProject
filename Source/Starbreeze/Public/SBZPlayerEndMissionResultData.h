#pragma once
#include "CoreMinimal.h"
#include "SBZCashRewardData.h"
#include "SBZCharacterEndMissionExpBonusData.h"
#include "SBZCharacterEndMissionResultData.h"
#include "SBZInfamyPointPayoutRewardData.h"
#include "SBZPlayerStatisticsValue.h"
#include "SBZRandomItemReward.h"
#include "SBZSkillRewardData.h"
#include "SBZWeaponProgressionUpdateData.h"
#include "SBZPlayerEndMissionResultData.generated.h"

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
    TArray<FSBZRandomItemReward> RandomItemRewardArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponProgressionUpdateData> WeaponProgressionUpdateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSkillRewardData SkillRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInfamyPointPayoutRewardData InfamyPointPayoutRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerStatisticsValue InfamyStatsValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerStatisticsValue RenownStatsValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasBeenInCustody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SurvivedAssaultWaves;
    
    STARBREEZE_API FSBZPlayerEndMissionResultData();
};

