#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZModularMeshVisibility.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSBZModularMeshVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ModularMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibilityState;
    
    STARBREEZE_API FSBZModularMeshVisibility();
};

