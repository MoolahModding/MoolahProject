#pragma once
#include "CoreMinimal.h"
#include "SBZBackendProxyConfig.generated.h"

USTRUCT(BlueprintType)
struct FSBZBackendProxyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Base_Url;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Retry_Limit_Count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Retry_Timeout_Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Retry_Response_Codes;
    
    SBZBACKENDPROXY_API FSBZBackendProxyConfig();
};

