#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaRequestResult.h"
#include "SBZArmorManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZArmorManager : public UObject {
    GENERATED_BODY()
public:
    USBZArmorManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnArmorChunkEquipDone(ESBZMetaRequestResult Result) const;
    
};

