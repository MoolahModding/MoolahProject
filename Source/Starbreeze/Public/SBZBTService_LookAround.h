#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBZBTService_LookAround.generated.h"

UCLASS(Blueprintable)
class USBZBTService_LookAround : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAroundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeBetweenRotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumRotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusPriority;
    
public:
    USBZBTService_LookAround();

};

