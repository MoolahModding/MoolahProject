#pragma once
#include "CoreMinimal.h"
#include "SBZMainMenuCrimeNetHeistButton.h"
#include "SBZMainMenuCrimeNetStoryModeButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetStoryModeButton : public USBZMainMenuCrimeNetHeistButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIntroVideo;
    
public:
    USBZMainMenuCrimeNetStoryModeButton();

};

