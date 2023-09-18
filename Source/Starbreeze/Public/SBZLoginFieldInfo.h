#pragma once
#include "CoreMinimal.h"
#include "SBZLoginFieldInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZLoginFieldInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    STARBREEZE_API FSBZLoginFieldInfo();
};

