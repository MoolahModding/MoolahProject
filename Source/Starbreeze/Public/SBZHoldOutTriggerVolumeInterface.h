#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZHoldOutTriggerVolumeInterface.generated.h"

class USBZActorFilterComponent;

UINTERFACE(Blueprintable)
class USBZHoldOutTriggerVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZHoldOutTriggerVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZActorFilterComponent* GetActorFilterComponent() const;
    
};

