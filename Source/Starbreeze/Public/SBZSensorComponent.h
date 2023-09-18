#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZSensorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSensorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlueMode;
    
public:
    USBZSensorComponent();

};

