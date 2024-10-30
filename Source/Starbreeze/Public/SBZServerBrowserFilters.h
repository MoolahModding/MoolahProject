#pragma once
#include "CoreMinimal.h"
#include "SBZServerBrowserFilters.generated.h"

USTRUCT(BlueprintType)
struct FSBZServerBrowserFilters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HeistNames;
    
    STARBREEZE_API FSBZServerBrowserFilters();
};

