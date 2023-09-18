#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ABCredentials.generated.h"

UCLASS(Blueprintable)
class ACCELBYTEUE4SDK_API UABCredentials : public UObject {
    GENERATED_BODY()
public:
    UABCredentials();

    UFUNCTION(BlueprintCallable)
    FString GetUserId();
    
    UFUNCTION(BlueprintCallable)
    FString GetAccessToken();
    
};

