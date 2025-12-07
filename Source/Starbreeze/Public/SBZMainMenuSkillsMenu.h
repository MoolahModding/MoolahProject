#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZMetaRequestResult.h"
#include "PD3PlayerLoadout.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZMainMenuSkillsMenu.generated.h"

class USBZSkillCategoryData;
class USBZSkillData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuSkillsMenu : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlternativeSelectionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlternativeSelectionHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DescriptionScrollAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DescriptionScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillCategoryData*> SkillCategories;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout CachedPlayerLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerLoadoutConfig CachedPlayerLoadoutConfig;
    
public:
    USBZMainMenuSkillsMenu();

protected:
    UFUNCTION(BlueprintCallable)
    bool UnequipSkill(const USBZSkillData* SkillData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDescriptionScrollAxisChanged(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlternativeSelectionReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlternativeSelectionPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlternativeHoldDurationComplete();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnAlternativeSelectionReleased();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnAlternativeSelectionPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillLocked(const USBZSkillData* SkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillEquippable(const USBZSkillData* SkillData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleProgressionSave(ESBZMetaRequestResult Result);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetSkillTreeTierLockedStatus(FGameplayTag SkillCategoryTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillTagCount(FGameplayTag GameplayTag, int32 Layer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillLayerIndex(const USBZSkillData* SkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillCost(const USBZSkillData* SkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillArrayCost() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostOfEquippedSkillsWithTag(const FGameplayTag& SkillTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipSkill(const USBZSkillData* SkillData);
    
    UFUNCTION(BlueprintCallable)
    bool ClearEquippedSkillsWithTag(const FGameplayTag& SkillTag);
    
};

