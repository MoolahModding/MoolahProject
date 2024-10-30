#pragma once
#include "CoreMinimal.h"
#include "SBZGlobalLevelStateDelegateDelegate.h"
#include "SBZReplicatedIntStateActor.h"
#include "SBZGlobalLevelStateActor.generated.h"

UCLASS(Blueprintable)
class ASBZGlobalLevelStateActor : public ASBZReplicatedIntStateActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGlobalLevelStateDelegate OnLevelStateChanged;
    
    ASBZGlobalLevelStateActor(const FObjectInitializer& ObjectInitializer);

};

