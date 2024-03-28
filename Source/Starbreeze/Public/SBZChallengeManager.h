#pragma once
#include "CoreMinimal.h"
#include "UserChallengeRecord.h"
#include "UObject/Object.h"
#include "ESBZChallengeConversion.h"
#include "SBZChallengeData.h"
#include "SBZChallengeProgressStat.h"
#include "SBZOnCompletedAchievementRequestDoneDelegateDelegate.h"
#include "SBZOnCompletedChallengeRequestDoneDelegateDelegate.h"
#include "SBZRecommendedChallenges.h"
#include "SBZStatData.h"
#include "SBZChallengeManager.generated.h"

class USBZChallengeLocalizationOverrides;
class USBZChallengeManager;
class UStringTable;

UCLASS(Blueprintable)
class USBZChallengeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCompletedChallengeRequestDoneDelegate OnCompletedChallenge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCompletedAchievementRequestDoneDelegate OnCompletedAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZChallengeLocalizationOverrides* LocalizationOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InfamyPointRewardStatID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStringTable*> ChallengesStringTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStringTable*> ChallengesStatsStringTables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZChallengeData> ChallengeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZChallengeData> AchievementMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZStatData> StatMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeData> CompletedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ESBZChallengeConversion> ChallengeConversionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeData> CompletedAchievementsAtStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUserChallengeRecord> ChallengeRecordCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZRecommendedChallenges> RecommendedChallengesMap;
    
public:
    USBZChallengeManager();
    UFUNCTION(BlueprintCallable)
    void RefreshChallengeRecordCache();
    
private:
    UFUNCTION()
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
    UFUNCTION()
    void HandleOnStateMachineStateEntered(FName StateName);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetStatProgress(const FName& InStatID);
    
    UFUNCTION(BlueprintCallable)
    bool GetRecommendedChallenges(const FString& ScreenName, FSBZRecommendedChallenges& RecommendedChallengesOut);
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZChallengeData> GetCompletedChallengesDuringMission() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatObjectiveText(const UObject* WorldContextObject, const FSBZChallengeData& Challenge, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatNameText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatDescriptionText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintPure)
    FText GetChallengeNameText(const FSBZChallengeData& Challenge);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeManager* GetChallengeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    FText GetChallengeDescriptionText(const FSBZChallengeData& Challenge);
    
};

