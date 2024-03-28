#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetCreditsRowBase.h"
#include "SBZWidgetCreditsTextPair.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZWidgetCreditsTextPair : public USBZWidgetCreditsRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextFirstWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextSecondWidget;
    
    USBZWidgetCreditsTextPair();
};

