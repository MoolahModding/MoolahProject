#pragma once
#include "CoreMinimal.h"
#include "SBZToolData.h"
#include "SBZToolHackingData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZToolHackingData : public USBZToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackingSynchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HackingToolDOFFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackingAimDegreePadding;
    
    USBZToolHackingData();

};

