#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ABServerCredentials.generated.h"

UCLASS(Blueprintable)
class UABServerCredentials : public UObject {
    GENERATED_BODY()
public:
    UABServerCredentials();

    UFUNCTION(BlueprintCallable)
    FString GetAccessToken();
    
};

