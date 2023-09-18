#pragma once
#include "CoreMinimal.h"
#include "GridlyTableCell.h"
#include "GridlyTableRow.generated.h"

USTRUCT(BlueprintType)
struct GRIDLY_API FGridlyTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGridlyTableCell> Cells;
    
    FGridlyTableRow();
};

