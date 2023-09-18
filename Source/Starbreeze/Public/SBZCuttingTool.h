#pragma once
#include "CoreMinimal.h"
#include "SBZTool.h"
#include "SBZCuttingTool.generated.h"

class UAkRtpc;
class UNiagaraComponent;

UCLASS(Blueprintable)
class ASBZCuttingTool : public ASBZTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TorchEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TorchMaxEffectVisibilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivatedMaxRTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivatedIdleMaxRTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivatedUsingMaxRTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CuttingSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CuttingToolAutoCuttingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnCuttingToolStrengthRtpc;
    
public:
    ASBZCuttingTool(const FObjectInitializer& ObjectInitializer);

};

