#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableToolBase.h"
#include "SBZECMJammer.generated.h"

class ASBZPlayerState;
class UAkComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class ASBZECMJammer : public ASBZPlaceableToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OwningPlayerState;
    
public:
    ASBZECMJammer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJammerEffectEnded();
    
};

