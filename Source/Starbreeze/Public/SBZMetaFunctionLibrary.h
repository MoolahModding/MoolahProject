#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZMetaEventData.h"
#include "SBZMetaFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMetaFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMetaFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetActiveMetaEvent(const UObject* WorldContextObject, TArray<FSBZMetaEventData>& OutMetaEventArray);
    
};

