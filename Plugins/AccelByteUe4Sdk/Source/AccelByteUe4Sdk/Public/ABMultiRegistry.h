#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ABMultiRegistry.generated.h"

class UABApiClient;

UCLASS(Blueprintable)
class UABMultiRegistry : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UABMultiRegistry();
    UFUNCTION(BlueprintCallable)
    static UABApiClient* GetApiClient(const FString& Key);
    
};

