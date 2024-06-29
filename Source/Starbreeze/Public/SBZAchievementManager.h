#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZChallengeData.h"
#include "SBZAchievementManager.generated.h"

class USBZAchievementManager;

UCLASS(Blueprintable)
class USBZAchievementManager : public UObject {
    GENERATED_BODY()
public:
    USBZAchievementManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnInitializedChallengeRecordsCacheDone();
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAchievementManager* GetAchievementManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CompleteAchievements(const TArray<FName>& AchievementIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CompleteAchievement(const FName& AchievementId);
    
};

