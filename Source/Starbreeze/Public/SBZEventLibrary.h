#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZEventLibrary.generated.h"

class UObject;
class USBZGameEventBroker;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEventLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZEventLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZGameEventBroker* GetGameEventBroker(const UObject* WorldContextObject);
    
};

