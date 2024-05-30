#pragma once
#include "CoreMinimal.h"
#include "EPingQuality.h"
#include "SBZWidgetBase.h"
#include "SBZPingWidget.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZPingWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CriticalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPingAllowed;
    
public:
    USBZPingWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPingValueChanged(const int32 PingValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPingQualityChanged(const EPingQuality PingQuality);
    
};

