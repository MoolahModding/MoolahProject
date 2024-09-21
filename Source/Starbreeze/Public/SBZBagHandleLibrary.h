#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZBagHandle.h"
#include "SBZBagHandleLibrary.generated.h"

UCLASS(Blueprintable)
class USBZBagHandleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZBagHandleLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FSBZBagHandle& BagHandle);
    
};

