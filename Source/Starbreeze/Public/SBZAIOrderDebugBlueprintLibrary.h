#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAIOrderDebugBlueprintLibrary.generated.h"

class UClass;
class UObject;

UCLASS(Blueprintable)
class USBZAIOrderDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIOrderDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetOrderToAllSquads(UObject* ContextObject, UClass* AIOrder);
    
};

