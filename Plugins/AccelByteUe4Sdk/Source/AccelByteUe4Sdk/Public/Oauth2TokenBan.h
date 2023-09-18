#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Oauth2TokenBan.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FOauth2TokenBan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ban;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetedNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    FOauth2TokenBan();
};

