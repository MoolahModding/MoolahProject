#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZBlueprintFunctionValidState.h"
#include "SBZNodesFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZNodesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZNodesFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 RollRNG(const FRandomStream& RandomStream, int32 LastOutputPinIndex, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidBlueprintFunction(const UObject* Object, FName FunctionName, int32 ParameterCount, ESBZBlueprintFunctionValidState& OutState);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRNG(int32 Index, int32 RngBitmask);
    
};

