#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.h"
#include "SBZLaserPointConnection.generated.h"

USTRUCT(BlueprintType)
struct FSBZLaserPointConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector PointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector PointB;
    
    STARBREEZE_API FSBZLaserPointConnection();
};

