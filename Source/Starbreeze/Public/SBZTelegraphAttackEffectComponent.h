#pragma once
#include "CoreMinimal.h"
#include "SBZOnTelegraphAttackComponent.h"
#include "SBZTelegraphAttackEffectComponent.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZTelegraphAttackEffectComponent : public USBZOnTelegraphAttackComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TelegraphEffct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectAttachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
public:
    USBZTelegraphAttackEffectComponent(const FObjectInitializer& ObjectInitializer);

};

