#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZProgressionWaveMapping.h"
#include "SBZSpawnWaveProgressionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSpawnWaveProgressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZProgressionWaveMapping> ProgressionWaveMappings;
    
public:
    USBZSpawnWaveProgressionComponent(const FObjectInitializer& ObjectInitializer);

};

