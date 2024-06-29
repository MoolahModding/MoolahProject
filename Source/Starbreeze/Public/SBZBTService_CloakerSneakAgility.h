#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBZBTService_CloakerSneakAgility.generated.h"

UCLASS(Blueprintable)
class USBZBTService_CloakerSneakAgility : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToStartAgility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAcceptanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleToStartAgility;
    
public:
    USBZBTService_CloakerSneakAgility();

};

