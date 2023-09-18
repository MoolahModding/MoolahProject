#pragma once
#include "CoreMinimal.h"
#include "SBZBagCustomFilterDelegate.h"
#include "SBZBagFilter.h"
#include "SBZBagTriggerDelegateDelegate.h"
#include "SBZBagTriggerSecuredDelegateDelegate.h"
#include "SBZBagTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FSBZBagTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagFilter BasicFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagCustomFilter FilterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagTriggerDelegate CompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagTriggerSecuredDelegate SecuredDelegate;
    
    STARBREEZE_API FSBZBagTriggerData();
};

