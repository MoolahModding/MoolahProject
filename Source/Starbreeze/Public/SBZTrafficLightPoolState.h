#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficLightStatus.h"
#include "SBZTrafficLightPoolState.generated.h"

class USBZAmbientSoundComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FSBZTrafficLightPoolState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CachedMeshComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAmbientSoundComponent*> PedestrianSoundEmitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTrafficLightStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    STARBREEZE_API FSBZTrafficLightPoolState();
};

