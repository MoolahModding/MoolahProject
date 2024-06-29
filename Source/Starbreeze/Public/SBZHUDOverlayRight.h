#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZHUDOverlayRight.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHUDOverlayRight : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_PrePlanningAssets;
    
    USBZHUDOverlayRight();

    UFUNCTION(BlueprintCallable)
    void MakePrePlanningText();
    
};

