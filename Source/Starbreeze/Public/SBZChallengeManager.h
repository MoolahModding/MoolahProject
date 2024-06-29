#pragma once
#include "CoreMinimal.h"
#include "UserChallengeRecord.h"
#include "UObject/Object.h"
#include "ESBZChallengeConversion.h"
#include "SBZChallengeData.h"
#include "SBZChallengeProgressStat.h"
#include "SBZOnCompletedAchievementRequestDoneDelegateDelegate.h"
#include "SBZOnCompletedChallengeRequestDoneDelegateDelegate.h"
#include "SBZOnDailyChallengesUpdatedDelegateDelegate.h"
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnDailyChallengesUpdatedDelegate OnDailyChallengesUpdated;
    
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
    
public:
    USBZChallengeManager();

    UFUNCTION(BlueprintCallable)
    void RefreshDailySlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshChallengeRecordCache();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStateMachineStateEntered(FName StateName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatProgress(const FName& InStatID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRerollAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRecommendedChallenges(const FString& ScreenName, FSBZRecommendedChallenges& RecommendedChallengesOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZChallengeData> GetDailyChallengesArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZChallengeData> GetCompletedChallengesDuringMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatObjectiveText(const UObject* WorldContextObject, const FSBZChallengeData& Challenge, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatNameText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetChallengeStatDescriptionText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChallengeNameText(const FSBZChallengeData& Challenge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeManager* GetChallengeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChallengeDescriptionText(const FSBZChallengeData& Challenge);
    
};

