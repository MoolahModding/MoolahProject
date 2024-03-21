#pragma once
#include "CoreMinimal.h"
#include "SBZPawnWidget.h"
#include "PD3MaskOnNotificationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3MaskOnNotificationWidget : public USBZPawnWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPuttingOnMask;
    
public:
    UPD3MaskOnNotificationWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressChanged(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaskOnChanged(bool bInIsPuttingOnMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaskOnProgress() const;
    
};

