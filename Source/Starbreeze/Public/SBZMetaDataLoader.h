#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMetaDataLoader.generated.h"

UCLASS(Blueprintable)
class USBZMetaDataLoader : public UObject {
    GENERATED_BODY()
public:
    USBZMetaDataLoader();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRetryGetUserEntitlements();
    
};

