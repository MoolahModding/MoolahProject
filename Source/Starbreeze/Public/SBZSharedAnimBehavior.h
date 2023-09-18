#pragma once
#include "CoreMinimal.h"
#include "SBZSharedMontageInfo.h"
#include "SBZSharedAnimBehavior.generated.h"

USTRUCT(BlueprintType)
struct FSBZSharedAnimBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZSharedMontageInfo> SharedMontageInfos;
    
public:
    STARBREEZE_API FSBZSharedAnimBehavior();
};

