#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ESBZGateState.h"
#include "SBZDoorBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZDoorBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGateState OpenDirection;
    
    USBZDoorBoxComponent();

};

