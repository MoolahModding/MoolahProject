#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBagDropPoint.generated.h"

UCLASS(Blueprintable)
class ASBZBagDropPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldActivateOnBeginPlay;
    
public:
    ASBZBagDropPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EnableAsBagDropPoint();
    
    UFUNCTION(BlueprintCallable)
    void DisableAsBagDropPoint();
    
};

