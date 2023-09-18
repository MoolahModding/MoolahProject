#pragma once
#include "CoreMinimal.h"
#include "SBZEventRequest.h"
#include "SBZEventRequestContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBZEventRequestContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEventRequest> EventRequests;
    
    STARBREEZE_API FSBZEventRequestContainer();
};

