#pragma once
#include "CoreMinimal.h"
#include "SBZInteractModeDisplayData.h"
#include "SBZInteractDisplayData.generated.h"

class USBZBaseInteractableComponent;

USTRUCT(BlueprintType)
struct FSBZInteractDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInteractModeDisplayData> ModeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Prio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailPrio;
    
    STARBREEZE_API FSBZInteractDisplayData();
};

