#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3HUDAICrewStatusWidget.generated.h"

class ASBZAICrewState;
class UImage;
class UPD3DefeatTimerWidget;
class UPD3HUDPlayerDefeatStateWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDAICrewStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AICrewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_AICrewName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerDefeatStateWidget* Widget_AICrewDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3DefeatTimerWidget* Widget_DefeatTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICrewState* AICrewState;
    
public:
    UPD3HUDAICrewStatusWidget();

};

