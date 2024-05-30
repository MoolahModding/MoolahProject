#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZControlsReferenceAxisWidget.generated.h"

class UPanelWidget;
class USBZAxisInputWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZControlsReferenceAxisWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_AxisInputLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAxisInputsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAxisInputWidget> AxisInputWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AxisList;
    
public:
    USBZControlsReferenceAxisWidget();

};

