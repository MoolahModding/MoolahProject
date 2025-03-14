#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "SBZTimedNiagaraEffectNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZTimedNiagaraEffectNotifyState : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    USBZTimedNiagaraEffectNotifyState();

};

