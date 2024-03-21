#pragma once
#include "CoreMinimal.h"
#include "SBZAirNodeNeighborInfo.h"
#include "SBZAirNavigationNode.generated.h"

USTRUCT(BlueprintType)
struct FSBZAirNavigationNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Center[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLeaf: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBlocked: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FirstChildIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAirNodeNeighborInfo> NeighborInfo;
    
    STARBREEZE_API FSBZAirNavigationNode();
};

