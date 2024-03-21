#pragma once
#include "CoreMinimal.h"
#include "SBZAirNodeNeighborInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZAirNodeNeighborInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TreeIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> Indicies;
    
    STARBREEZE_API FSBZAirNodeNeighborInfo();
};

