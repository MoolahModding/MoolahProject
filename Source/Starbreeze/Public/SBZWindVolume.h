#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBZWindVolume.generated.h"

class USBZWindEmitterComponent;

UCLASS(Blueprintable)
class ASBZWindVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWindEmitterComponent* EmitterComponent;
    
public:
    ASBZWindVolume(const FObjectInitializer& ObjectInitializer);

};

