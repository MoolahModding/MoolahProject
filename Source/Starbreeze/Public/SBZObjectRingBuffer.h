#pragma once
#include "CoreMinimal.h"
#include "DropElementDelegateDelegate.h"
#include "SBZObjectContainer.h"
#include "SBZObjectRingBuffer.generated.h"

UCLASS(Blueprintable)
class USBZObjectRingBuffer : public USBZObjectContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HeadIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropElementDelegate ElementDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectContainer* DroppedElementContainer;
    
    USBZObjectRingBuffer();

};

