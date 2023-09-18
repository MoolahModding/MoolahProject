#pragma once
#include "CoreMinimal.h"
#include "SBZReportPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZReportPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    STARBREEZE_API FSBZReportPlayerInfo();
};

