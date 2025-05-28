#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DJwkSetDelegateDelegate.h"
#include "ABServerOauth2.generated.h"

UCLASS(Blueprintable)
class UABServerOauth2 : public UObject {
    GENERATED_BODY()
public:
    UABServerOauth2();

    UFUNCTION(BlueprintCallable)
    void LoginWithClientCredentials(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetJwks(FDJwkSetDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAllCredentials();
    
};

