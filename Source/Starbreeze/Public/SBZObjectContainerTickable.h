#pragma once
#include "CoreMinimal.h"
#include "ContainerTickDelegateDelegate.h"
#include "SBZObjectContainer.h"
#include "SBZObjectContainerTickable.generated.h"

UCLASS(Blueprintable)
class USBZObjectContainerTickable : public USBZObjectContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerTickDelegate TickDelegate;
    
    USBZObjectContainerTickable();

};

