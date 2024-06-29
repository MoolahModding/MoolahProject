#pragma once
#include "CoreMinimal.h"
#include "AddRemoveDelegate.h"
#include "ContainerChangedDelegate.h"
#include "SBZActorContainer.h"
#include "SBZObservableActorContainer.generated.h"

UCLASS(Blueprintable)
class USBZObservableActorContainer : public USBZActorContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerChanged OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddRemove OnAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddRemove OnRemoved;
    
    USBZObservableActorContainer();

};

