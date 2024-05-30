#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAIShieldCoverAttachPoint.generated.h"

class APawn;
class ASBZAIShieldCoverAttachPoint;

UCLASS(Blueprintable)
class ASBZAIShieldCoverAttachPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Occupier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIShieldCoverAttachPoint*> BlockingCovers;
    
public:
    ASBZAIShieldCoverAttachPoint(const FObjectInitializer& ObjectInitializer);

};

