#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZSkeletalDebris.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASBZSkeletalDebris : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASBZSkeletalDebris(const FObjectInitializer& ObjectInitializer);

};

