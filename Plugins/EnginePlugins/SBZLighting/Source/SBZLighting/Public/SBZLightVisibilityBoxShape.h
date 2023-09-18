#pragma once
#include "CoreMinimal.h"
#include "SBZLightVisibilityShape.h"
#include "SBZLightVisibilityBoxShape.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASBZLightVisibilityBoxShape : public ASBZLightVisibilityShape {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    ASBZLightVisibilityBoxShape(const FObjectInitializer& ObjectInitializer);

};

