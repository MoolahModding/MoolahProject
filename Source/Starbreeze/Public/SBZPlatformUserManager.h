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
private:
    UFUNCTION()
    void OnPopUpClosedConfirmChanges(FName ActionName);
    
    UFUNCTION()
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
};

