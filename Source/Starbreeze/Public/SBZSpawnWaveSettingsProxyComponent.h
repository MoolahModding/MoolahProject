#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZDifficulty.h"
#include "SBZSpawnWaveManagerDifficultySettings.h"
#include "SBZSpawnWaveSettingsProxyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSpawnWaveSettingsProxyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearCountTypeOnAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearCountTypeOnUnassigned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, FSBZSpawnWaveManagerDifficultySettings> DifficultyToSettingsMap;
    
public:
    USBZSpawnWaveSettingsProxyComponent(const FObjectInitializer& ObjectInitializer);

};

