#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteBlueprintsServerCredentials.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsServerCredentials : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsServerCredentials();
    UFUNCTION(BlueprintCallable)
    static FString GetMatchId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClientAccessToken();
    
};

