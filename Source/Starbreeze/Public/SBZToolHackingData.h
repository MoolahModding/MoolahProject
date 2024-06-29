#pragma once
#include "CoreMinimal.h"
#include "SBZToolData.h"
#include "Templates/SubclassOf.h"
#include "SBZToolHackingData.generated.h"

class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZToolHackingData : public USBZToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackingSynchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> HackingToolDOFFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackingAimDegreePadding;
    
    USBZToolHackingData();

};

