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
    ASBZBaseDebris();
protected:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void CreateImpactPoint(const FHitResult& Hit);
    
};

