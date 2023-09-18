#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterEffectSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FSBZCharacterEffectSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCharacterEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidesWhenActive;
    
    STARBREEZE_API FSBZCharacterEffectSpawnParams();
};

