#pragma once
#include "CoreMinimal.h"
#include "SBZEscapeTimerDelegateDelegate.h"
#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerEscapeVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASBZPlayerEscapeVolume : public ASBZPlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEscapeTimerDelegate OnEscapeTimerDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeTimeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhenEscapeTimeIsComplete;
    
public:
    ASBZPlayerEscapeVolume(const FObjectInitializer& ObjectInitializer);

};

