#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ESBZAIWeakPointType.h"
#include "SBZWeakpointHideInfo.h"
#include "SBZAIWeakPoint.generated.h"

class AActor;
class UAkAudioEvent;
class UNiagaraSystem;
class USBZAIWeakPointAttributeSet;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIWeakPoint : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakPointHealth[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestroyedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIWeakPointAttributeSet* WeakPointAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DestroyedInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIWeakPointType WeakPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeakpointHideInfo> HideInfo;
    
public:
    USBZAIWeakPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnWeakPointDestroyed();
    
};

