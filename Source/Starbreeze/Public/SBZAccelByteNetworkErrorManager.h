#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAccelByteNetworkErrorManager.generated.h"

class USBZAccelByteNetworkErrorManager;
class USBZWidgetBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAccelByteNetworkErrorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* NotifyWidget;
    
public:
    USBZAccelByteNetworkErrorManager();

private:
    UFUNCTION(BlueprintCallable)
    void ValidateFailedInternetConnection();
    
    UFUNCTION(BlueprintCallable)
    void PollAccelTimeService();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAccelByteNetworkErrorManager* Get(const UObject* WorldContextObject);
    
};

