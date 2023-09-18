#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineGetRegionsEventDelegateDelegate.h"
#include "SBZOnlineGetAvailableRegions.generated.h"

class UObject;
class USBZOnlineGetAvailableRegions;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOnlineGetAvailableRegions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineGetRegionsEventDelegate OnComplete;
    
    USBZOnlineGetAvailableRegions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineGetAvailableRegions* GetAvailableRegions(UObject* WorldContextObject);
    
};

