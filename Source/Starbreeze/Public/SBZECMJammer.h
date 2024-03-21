#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableToolBase.h"
#include "SBZECMJammer.generated.h"

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
    
public:
    ASBZECMJammer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJammerEffectEnded();
    
};

