#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZWidgetBase.h"
#include "SBZHUDWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDWidgetBase : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredDisplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRequiredTags;
    
public:
    USBZHUDWidgetBase();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetRequiresUITagsChanged(bool bInHasRequiredTags);
    
private:
    UFUNCTION()
    void OnUITagsChanged(const FGameplayTagContainer& UITagContainer);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasRequiredTags() const;
    
};

