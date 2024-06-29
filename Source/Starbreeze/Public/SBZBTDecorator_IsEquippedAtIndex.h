#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_IsEquippedAtIndex.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_IsEquippedAtIndex : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
public:
    USBZBTDecorator_IsEquippedAtIndex();

};

