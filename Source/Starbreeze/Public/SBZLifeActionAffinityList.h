#pragma once
#include "CoreMinimal.h"
#include "SBZLifeActionAffinity.h"
#include "SBZLifeActionAffinityList.generated.h"

USTRUCT(BlueprintType)
struct FSBZLifeActionAffinityList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLifeActionAffinity> Affinities;
    
    STARBREEZE_API FSBZLifeActionAffinityList();
};

