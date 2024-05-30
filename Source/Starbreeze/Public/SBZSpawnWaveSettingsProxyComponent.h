#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZSpawnWaveManagerDifficultySettings.h"
#include "SBZSpawnWaveSettingsProxyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSpawnWaveSettingsProxyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnWaveManagerDifficultySettings DifficultySettingsArray[4];
    
public:
    USBZSpawnWaveSettingsProxyComponent(const FObjectInitializer& ObjectInitializer);

};

