#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMenuButton.h"
#include "SBZStoreItemUIData.h"
#include "SBZMaskOfTheWeekWidget.generated.h"

class USBZTimeEventManager;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMaskOfTheWeekWidget : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerUpdateFrequency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTimeEventManager* TimeEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData StoreItemUIData;
    
public:
    USBZMaskOfTheWeekWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTimerText(const bool bInPreviewDays, const FTimespan& InTimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaskOfTheWeekReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataUpdated(const FSBZStoreItemUIData& InUpdatedStoreItemUIData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeRemainingUntilReset();
    
};

