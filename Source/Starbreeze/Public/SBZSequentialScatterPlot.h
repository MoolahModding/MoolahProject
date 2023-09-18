#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSequentialScatterPlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZSequentialScatterPlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> Points;
    
    STARBREEZE_API FSBZSequentialScatterPlot();
};

