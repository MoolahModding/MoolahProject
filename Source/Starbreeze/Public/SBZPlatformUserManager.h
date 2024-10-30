#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZPlatformUserManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlatformUserManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjectsHoldingBackReturnToIIS;
    
public:
    USBZPlatformUserManager();

    UFUNCTION(BlueprintCallable)
    void OnVoiceChatLoginComplete(int32 InUserIndex, const FString& NativePlatformUserId, const FString& EOSPlatformProductUserId, bool bLoginSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpClosedConfirmChanges(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
};

