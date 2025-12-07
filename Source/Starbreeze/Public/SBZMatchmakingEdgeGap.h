#pragma once
#include "CoreMinimal.h"
#include "SBZMatchmaking.h"
#include "SBZMatchmakingEdgeGap.generated.h"

class USBZMatchmakingSubsystemEdgeGap;

UCLASS(Blueprintable)
class USBZMatchmakingEdgeGap : public USBZMatchmaking {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMatchmakingSubsystemEdgeGap* EdgeGapSubsystem;
    
public:
    USBZMatchmakingEdgeGap();

};

