#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZSkillLineCountData.h"
#include "SBZLoadoutSkillsButton.generated.h"

class USBZSkillData;

UCLASS(Blueprintable, EditInlineNew)
class USBZLoadoutSkillsButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSkillLineCountData> SkillLineCountDataArray;
    
public:
    USBZLoadoutSkillsButton();

    UFUNCTION(BlueprintCallable)
    void NativeInitializeSkills(const TArray<USBZSkillData*>& SkillList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeSkills(int32 EquippedSkillCount);
    
};

