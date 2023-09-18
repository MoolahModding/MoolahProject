#pragma once
#include "CoreMinimal.h"
#include "SBZFootBoneModifier.generated.h"

USTRUCT(BlueprintType)
struct FSBZFootBoneModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    STARBREEZE_API FSBZFootBoneModifier();
};

