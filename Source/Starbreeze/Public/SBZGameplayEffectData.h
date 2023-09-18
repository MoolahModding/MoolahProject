#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayEffectData.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZGameplayEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    STARBREEZE_API FSBZGameplayEffectData();
};

