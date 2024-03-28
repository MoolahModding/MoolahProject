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
    UFUNCTION()
    void OnInitializedChallengeRecordsCacheDone();
    
    UFUNCTION()
    void OnChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
    UFUNCTION()
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAchievementManager* GetAchievementManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    void CompleteAchievements(const TArray<FName>& AchievementIds);
    
    UFUNCTION(BlueprintPure)
    void CompleteAchievement(const FName& AchievementId);
    
};

