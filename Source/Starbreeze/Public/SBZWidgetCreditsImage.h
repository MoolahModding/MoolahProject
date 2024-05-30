#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetCreditsRowBase.h"
#include "SBZWidgetCreditsImage.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USBZWidgetCreditsImage : public USBZWidgetCreditsRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImageWidget;
    
    USBZWidgetCreditsImage();

};

