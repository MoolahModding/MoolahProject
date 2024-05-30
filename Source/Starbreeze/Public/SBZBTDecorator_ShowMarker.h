#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "EPD3HeistState.h"
#include "ESBZMarkerState.h"
#include "SBZBTDecorator_ShowMarker.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_ShowMarker : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMarkerState Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldChangeDependantOnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3HeistState NewMarkerStateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMarkerState StateDependantMarker;
    
public:
    USBZBTDecorator_ShowMarker();

};

