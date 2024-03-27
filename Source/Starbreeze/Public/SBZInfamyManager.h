#pragma once
#include "CoreMinimal.h"
#include "SBZOnInfamyXPChangedDelegateDelegate.h"
#include "SBZOnRenownLevelChangedDelegateDelegate.h"
#include "SBZPlayerStatisticsManager.h"
#include "SBZInfamyManager.generated.h"

class UObject;
class USBZInfamyManager;

UCLASS(Blueprintable)
class USBZInfamyManager : public USBZPlayerStatisticsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnInfamyXPChangedDelegate OnInfamyXPChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnRenownLevelChangedDelegate OnRenownLevelChangedDelegate;
    
    USBZInfamyManager();
private:
    UFUNCTION()
    void HandleOnStateMachineStateEntered(FName StateName);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelForExperience(const int32 InExperience) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInfamyManager* GetInfamyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    int32 GetExperienceForLevel(const int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void ClientGetProgressInfo(int32& OutProgressTowardsNextLevelUp, int32& OutPointsRequiredForNextLevelUp);
    
    UFUNCTION(BlueprintPure)
    int32 ClientGetPreviousExperience() const;
    
    UFUNCTION(BlueprintPure)
    int32 ClientGetPreMatchExperience() const;
    
    UFUNCTION(BlueprintPure)
    int32 ClientGetCurrentRenownLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 ClientGetCurrentLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 ClientGetCurrentExperience() const;
    
};

