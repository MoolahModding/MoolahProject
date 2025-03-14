#pragma once
#include "CoreMinimal.h"
#include "SBZRoomActor.h"
#include "SBZOverkillWeaponDropPoint.generated.h"

UCLASS(Blueprintable)
class ASBZOverkillWeaponDropPoint : public ASBZRoomActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAddedOnBeginPlay;
    
public:
    ASBZOverkillWeaponDropPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFromWorldRuntime();
    
    UFUNCTION(BlueprintCallable)
    void AddToWorldRuntime();
    
};

