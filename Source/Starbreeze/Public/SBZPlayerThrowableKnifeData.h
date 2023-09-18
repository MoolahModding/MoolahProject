#pragma once
#include "CoreMinimal.h"
#include "SBZThrowableProjectileData.h"
#include "SBZPlayerThrowableKnifeData.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class USBZPlayerThrowableKnifeData : public USBZThrowableProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundRangePOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShatteredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReadyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrownEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ShatteredEffect;
    
    USBZPlayerThrowableKnifeData();

};

