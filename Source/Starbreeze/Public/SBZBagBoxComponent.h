#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBZBagBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZBagBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImpulseBuildUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseMultiplier;
    
public:
    USBZBagBoxComponent(const FObjectInitializer& ObjectInitializer);

};

