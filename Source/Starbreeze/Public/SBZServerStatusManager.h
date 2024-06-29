#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZServerStatusManager.generated.h"

class USBZServerStatusManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZServerStatusManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMessageReceivedDelegate, const FString&, Title, const FString&, Content);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageReceivedDelegate OnMessageReceived;
    
    USBZServerStatusManager();

    UFUNCTION(BlueprintCallable)
    void GetServerStatusMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZServerStatusManager* GetServerStatusManager(const UObject* WorldContextObject);
    
};

