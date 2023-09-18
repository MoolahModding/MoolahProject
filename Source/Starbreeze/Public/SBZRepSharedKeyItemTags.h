#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZRepSharedKeyItemTags.generated.h"

USTRUCT(BlueprintType)
struct FSBZRepSharedKeyItemTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    STARBREEZE_API FSBZRepSharedKeyItemTags();
};

