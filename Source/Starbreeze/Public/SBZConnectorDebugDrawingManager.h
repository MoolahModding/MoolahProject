#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZConnectorDebugDrawingManager.generated.h"

class ULineBatchComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZConnectorDebugDrawingManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* LineBatchComponent;
    
public:
    ASBZConnectorDebugDrawingManager(const FObjectInitializer& ObjectInitializer);

};

