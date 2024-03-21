#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZWidgetBase.h"
#include "SBZInternetStatusWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USBZInternetStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NetworkErrorImage;
    
public:
    USBZInternetStatusWidget();
    UFUNCTION(BlueprintCallable)
    void SetNetworkLostConnectionVisibility(ESBZServiceStatus ServiceStatus);
    
};

