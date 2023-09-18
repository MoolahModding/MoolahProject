#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZTool.h"
#include "SBZPlaceableToolBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASBZPlaceableToolBase : public ASBZTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonationTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonationRange;
    
public:
    ASBZPlaceableToolBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

