#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ServerMultiRegistry.generated.h"

class UServerApiClient;

UCLASS(Blueprintable)
class UServerMultiRegistry : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UServerMultiRegistry();
    UFUNCTION(BlueprintCallable)
    static UServerApiClient* GetServerApiClient(const FString& Key);
    
};

