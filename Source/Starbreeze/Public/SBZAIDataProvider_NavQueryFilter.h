#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "SBZAIDataProvider_NavQueryFilter.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZAIDataProvider_NavQueryFilter : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DefaultValue;
    
    STARBREEZE_API FSBZAIDataProvider_NavQueryFilter();
};

