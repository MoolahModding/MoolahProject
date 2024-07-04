#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "SBZWidgetBase.h"
#include "SBZAxisInputWidget.generated.h"

class USBZInputKeyWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAxisInputWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInputKeyWidget* PrimaryKeyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInputKeyWidget* SecondaryKeyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SecondaryKeyDisableVisibility;
    
public:
    USBZAxisInputWidget();

    UFUNCTION(BlueprintCallable)
    void SetAxis(FName InAxisName);
    
};

