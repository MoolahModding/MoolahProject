#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "UserBan.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUserBan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBanReason Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FUserBan();
};

