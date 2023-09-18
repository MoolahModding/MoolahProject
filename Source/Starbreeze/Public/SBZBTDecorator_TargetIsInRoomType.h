#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_TargetIsInRoomType.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_TargetIsInRoomType : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RoomType;
    
public:
    USBZBTDecorator_TargetIsInRoomType();

};

