#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPD3HeistState.h"
#include "PD3TickerSettings.h"
#include "SBZPawnWidget.h"
#include "PD3TickerWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UPD3TickerWidget : public USBZPawnWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnimation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3TickerSettings TickerSettings[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Postfix;
    
public:
    UPD3TickerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTickerModeChanged(const FText& Text, const FLinearColor& TextColor, const FLinearColor& BackgroundColor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

