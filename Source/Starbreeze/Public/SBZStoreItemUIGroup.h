#pragma once
#include "CoreMinimal.h"
#include "SBZStoreItemUICategory.h"
#include "SBZStoreItemUIData.h"
#include "SBZStoreItemUIGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBZStoreItemUIGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUICategory ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStoreItemUIData> CategoryItems;
    
    STARBREEZE_API FSBZStoreItemUIGroup();
};

