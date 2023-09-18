#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_EnableOutline.generated.h"

class USBZOutlineAsset;

UCLASS(Blueprintable)
class USBZBTDecorator_EnableOutline : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
public:
    USBZBTDecorator_EnableOutline();

};

