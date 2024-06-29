#pragma once
#include "CoreMinimal.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "SBZWheeledVehicleMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleMovementComponent : public USimpleWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDriveTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverriddenDriveTorque;
    
public:
    USBZWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer);

};

