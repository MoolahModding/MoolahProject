#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_Escalate.generated.h"

class APawn;
class USBZActionNotificationAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIOrder_Escalate : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* DefaultReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEscalate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* EscalationReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* LastPawn;
    
public:
    USBZAIOrder_Escalate();
private:
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
};

