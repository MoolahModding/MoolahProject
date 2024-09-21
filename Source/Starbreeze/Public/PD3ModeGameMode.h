#pragma once
#include "CoreMinimal.h"
#include "PD3HeistGameMode.h"
#include "PD3ModeGameMode.generated.h"

class USBZSpawnWaveManager;

UCLASS(Blueprintable, NonTransient)
class APD3ModeGameMode : public APD3HeistGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnWaveManager* SpawnWaveManager;
    
public:
    APD3ModeGameMode(const FObjectInitializer& ObjectInitializer);

};

