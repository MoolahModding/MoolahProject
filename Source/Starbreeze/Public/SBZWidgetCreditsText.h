#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetCreditsRowBase.h"
#include "SBZWidgetCreditsText.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZWidgetCreditsText : public USBZWidgetCreditsRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextWidget;
    
    USBZWidgetCreditsText();
};

