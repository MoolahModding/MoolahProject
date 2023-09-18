#include "SBZCuttingTool.h"
#include "NiagaraComponent.h"

ASBZCuttingTool::ASBZCuttingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TorchEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->TorchMaxEffectVisibilityTime = 0.50f;
    this->ActivatedMaxRTPCValue = 50.00f;
    this->ActivatedIdleMaxRTPCValue = 75.00f;
    this->ActivatedUsingMaxRTPCValue = 100.00f;
    this->CuttingSoundMultiplicationValue = 1.00f;
    this->CuttingToolAutoCuttingTimer = 0.30f;
    this->OnCuttingToolStrengthRtpc = NULL;
    this->bReplicateRootAttachment = false;
}


