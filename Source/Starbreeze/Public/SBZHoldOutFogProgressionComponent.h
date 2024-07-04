#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZProgressionFogMapping.h"
#include "SBZHoldOutFogProgressionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHoldOutFogProgressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZProgressionFogMapping> ProgressionFogMapping;
    
public:
    USBZHoldOutFogProgressionComponent(const FObjectInitializer& ObjectInitializer);

};

