#pragma once
#include "CoreMinimal.h"
#include "SBZToggleGadget.h"
#include "SBZLaserGadget.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZLaserGadget : public ASBZToggleGadget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserMesh;
    
public:
    ASBZLaserGadget(const FObjectInitializer& ObjectInitializer);

};

