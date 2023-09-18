#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZBagFilter.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZBagFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> FilterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
    STARBREEZE_API FSBZBagFilter();
};

