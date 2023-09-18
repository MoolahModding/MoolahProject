#pragma once
#include "CoreMinimal.h"
#include "SBZUIHUDContext.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIHUDContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerHUDDisplayed;
    
    STARBREEZE_API FSBZUIHUDContext();
};

