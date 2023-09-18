#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZPlatformUserManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlatformUserManager : public UObject {
    GENERATED_BODY()
public:
    USBZPlatformUserManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpClosedConfirmChanges(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
};

