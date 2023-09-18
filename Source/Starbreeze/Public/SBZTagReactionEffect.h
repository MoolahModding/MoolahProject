#pragma once
#include "CoreMinimal.h"
#include "SBZTagReactionEffect.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FSBZTagReactionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TagReactionEffect;
    
    STARBREEZE_API FSBZTagReactionEffect();
};

