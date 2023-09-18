#pragma once
#include "CoreMinimal.h"
#include "SBZAIRepositionType.h"
#include "SBZBTTask_RunMoveToBehavior.h"
#include "SBZBTTask_RunRepositionBehavior.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RunRepositionBehavior : public USBZBTTask_RunMoveToBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAIRepositionType> SelectableRepositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyMovedFarDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTickRate;
    
public:
    USBZBTTask_RunRepositionBehavior();

};

