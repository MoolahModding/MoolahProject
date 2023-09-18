#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZShotgunSpreadPattern.generated.h"

USTRUCT(BlueprintType)
struct FSBZShotgunSpreadPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PelletSpreadAngles;
    
    STARBREEZE_API FSBZShotgunSpreadPattern();
};

