#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZLifeTimeLensParticleHandle.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FSBZLifeTimeLensParticleHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    STARBREEZE_API FSBZLifeTimeLensParticleHandle();
};

