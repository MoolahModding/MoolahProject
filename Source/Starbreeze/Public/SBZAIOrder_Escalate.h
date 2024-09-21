#pragma once
#include "CoreMinimal.h"
#include "EPD3DispatchCallerReason.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_Escalate.generated.h"

class USBZActionNotificationAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIOrder_Escalate : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3DispatchCallerReason DispatcherReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* DefaultReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEscalate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* EscalationReason;
    
public:
    USBZAIOrder_Escalate();

private:
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
};

