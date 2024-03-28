#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "Templates/SubclassOf.h"
#include "SBZAIDataProvider_NavQueryFilter.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FSBZAIDataProvider_NavQueryFilter : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultValue;
    
    STARBREEZE_API FSBZAIDataProvider_NavQueryFilter();
};

