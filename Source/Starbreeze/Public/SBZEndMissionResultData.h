#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionResult.h"
#include "SBZCharacterEndMissionResultData.h"
#include "SBZEndMissionSecuredBag.h"
#include "SBZInstantLootData.h"
#include "SBZMilestoneData.h"
#include "SBZObjectiveData.h"
#include "SBZPlayerEndMissionResultData.h"
#include "SBZEndMissionResultData.generated.h"

USTRUCT(BlueprintType)
struct FSBZEndMissionResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEndMissionResult MissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MissionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZEndMissionSecuredBag> SecuredBags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BagTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZObjectiveData> ExperienceObjectiveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZMilestoneData> ExperienceMilestoneArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerEndMissionResultData> PlayerResultArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerEndMissionResultData AllPlayerAIsResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCharacterEndMissionResultData AllOtherCharacterResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZInstantLootData> InstantLootArray;
    
    STARBREEZE_API FSBZEndMissionResultData();
};

