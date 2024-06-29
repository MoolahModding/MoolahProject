#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZAgilityRowQueryParam.h"
#include "SBZAgilityQueryParams.generated.h"

UCLASS(Blueprintable)
class USBZAgilityQueryParams : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObstacleDetectionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgilityRowQueryParam> RowQueryParams;
    
    USBZAgilityQueryParams();

};

