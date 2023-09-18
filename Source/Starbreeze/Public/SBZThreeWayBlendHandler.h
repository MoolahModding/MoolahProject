#pragma once
#include "CoreMinimal.h"
#include "SBZThreeWayBlendInstance.h"
#include "SBZThreeWayBlendHandler.generated.h"

USTRUCT(BlueprintType)
struct FSBZThreeWayBlendHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZThreeWayBlendInstance Instance1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZThreeWayBlendInstance Instance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZThreeWayBlendInstance Instance3;
    
    STARBREEZE_API FSBZThreeWayBlendHandler();
};

