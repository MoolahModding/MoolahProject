#pragma once
#include "CoreMinimal.h"
#include "EGridlyColumnDataType.h"
#include "GridlyColumnInfo.generated.h"

USTRUCT(BlueprintType)
struct GRIDLY_API FGridlyColumnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGridlyColumnDataType DataType;
    
    FGridlyColumnInfo();
};

