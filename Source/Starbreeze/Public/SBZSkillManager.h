#pragma once
#include "CoreMinimal.h"
#include "OnSkillLineRequestResultDelegateDelegate.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZPlayerStatisticsManager.h"
#include "SBZSkillManager.generated.h"

class ASBZPlayerState;
class UObject;
class USBZSkill;
class USBZSkillData;
class USBZSkillLine;
class USBZSkillLineData;
class USBZSkillManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSkillManager : public USBZPlayerStatisticsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkillLineRequestResultDelegate ResearchMarkerResultDelegate;
    
    USBZSkillManager();

    UFUNCTION(BlueprintCallable)
    bool UnequipSkills(TArray<USBZSkill*>& Skills, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
    UFUNCTION(BlueprintCallable)
    bool UnequipSkill(const USBZSkill* Skill, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetResearchMarkerOnSkillLine(const USBZSkillLine* SkillLine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillEquippable(const USBZSkill* Skill, const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPointsFromInfamyLevel(int32 InfamyLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPointsFromInfamyExperience(int32 InfamyExperience) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSkillManager* GetSkillManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZSkill* GetProgressingSkill(const USBZSkillLine* SkillLine) const;
    
    UFUNCTION(BlueprintCallable)
    USBZSkillLine* GetPlayerStatsForSkillLine(const ASBZPlayerState* PlayerState, const USBZSkillLineData* SkillLineData);
    
    UFUNCTION(BlueprintCallable)
    USBZSkill* GetPlayerStatsForSkill(const ASBZPlayerState* PlayerState, const USBZSkillLineData* SkillLineData, const USBZSkillData* SkillData);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerSkills(TArray<USBZSkillLine*>& PlayerSkills);
    
    UFUNCTION(BlueprintCallable)
    USBZSkillLine* GetPlayerSkillLine(const FName& AccelByteSkuNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSkillPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxProgressLevel(const USBZSkillLineData* SkillLine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEarnedSkillPoints();
    
    UFUNCTION(BlueprintCallable)
    bool EquipSkills(TArray<USBZSkill*>& Skills, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
    UFUNCTION(BlueprintCallable)
    bool EquipSkill(const USBZSkill* Skill, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
};

