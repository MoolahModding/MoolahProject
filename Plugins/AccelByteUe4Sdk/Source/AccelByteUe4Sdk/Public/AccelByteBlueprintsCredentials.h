#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteBlueprintsCredentials.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsCredentials : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsCredentials();
    UFUNCTION(BlueprintCallable)
    static FString GetUserSessionId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserNamespace();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserEmailAddress();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserDisplayName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetOAuthClientSecret();
    
    UFUNCTION(BlueprintCallable)
    static FString GetOAuthClientId();
    
};

