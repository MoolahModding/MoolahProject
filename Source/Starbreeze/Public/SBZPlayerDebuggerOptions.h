#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDebuggerOptions.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerDebuggerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInfiniteAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInaudible;
    
    STARBREEZE_API FSBZPlayerDebuggerOptions();
};

