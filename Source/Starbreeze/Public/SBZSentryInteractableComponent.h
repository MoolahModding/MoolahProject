#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZSentryInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSentryInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegularInteractionTime;
    
public:
    USBZSentryInteractableComponent();
};

