#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3CustodyTimerWidget.generated.h"

class ASBZPlayerState;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPD3CustodyTimerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimerText;
    
public:
    UPD3CustodyTimerWidget();

};

