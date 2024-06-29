#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZInteractReqData.h"
#include "SBZBaseInteractRequirement.generated.h"

class USBZInteractorComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZBaseInteractRequirement : public UObject {
    GENERATED_BODY()
public:
    USBZBaseInteractRequirement();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CheckRequirement(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const;
    
};

