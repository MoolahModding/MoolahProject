#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZLoadoutSkillsButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZLoadoutSkillsButton : public USBZMenuButton {
    GENERATED_BODY()
public:
    USBZLoadoutSkillsButton();

    UFUNCTION(BlueprintCallable)
    void NativeInitializeSkills();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeSkills(const TArray<int32>& EquippedSkillCategoriesCount);
    
};

