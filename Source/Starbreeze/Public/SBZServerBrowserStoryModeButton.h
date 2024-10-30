#pragma once
#include "CoreMinimal.h"
#include "SBZMainMenuCrimeNetStoryModeButton.h"
#include "SBZServerBrowserStoryModeButton.generated.h"

class USBZServerBrowserHeistButton;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZServerBrowserStoryModeButton : public USBZMainMenuCrimeNetStoryModeButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputTypeDependent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCollectionContainsStoryModeContent;
    
public:
    USBZServerBrowserStoryModeButton();

    UFUNCTION(BlueprintCallable)
    void SetStoryButtonDetails(const USBZServerBrowserHeistButton* ParentHeistButton, const bool bInCollectionContainsStoryModeContent);
    
};

