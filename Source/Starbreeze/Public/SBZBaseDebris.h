#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBZBaseDebris.generated.h"

class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ASBZBaseDebris : public AActor {
    GENERATED_BODY()
public:
    ASBZBaseDebris(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void CreateImpactPoint(const FHitResult& Hit);
    
};

