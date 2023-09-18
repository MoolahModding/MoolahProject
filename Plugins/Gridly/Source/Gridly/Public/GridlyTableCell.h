#pragma once
#include "CoreMinimal.h"
#include "GridlyTableCell.generated.h"

USTRUCT(BlueprintType)
struct FGridlyTableCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColumnId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DependencyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GRIDLY_API FGridlyTableCell();
};

