#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZLightVisibilityAreaAction.h"
#include "SBZLightVisibilityArea.generated.h"

class ALight;
class ASBZLightVisibilityShape;

UCLASS(Blueprintable, MinimalAPI)
class ASBZLightVisibilityArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALight*> Lights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZLightVisibilityShape*> Shapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESBZLightVisibilityAreaAction::Type> Action;
    
    ASBZLightVisibilityArea(const FObjectInitializer& ObjectInitializer);

};

