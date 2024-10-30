#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZFriendManager.generated.h"

UCLASS(Blueprintable)
class USBZFriendManager : public UObject {
    GENERATED_BODY()
public:
    USBZFriendManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformUserInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
};

