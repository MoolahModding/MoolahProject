#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZPlayerOnlineStatusLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZPlayerOnlineStatusLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZPlayerOnlineStatusLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetPlayerActivity(const UObject* WorldContextObject);
    
};

