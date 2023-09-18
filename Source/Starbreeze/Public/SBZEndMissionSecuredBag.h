#pragma once
#include "CoreMinimal.h"
#include "SBZEndMissionSecuredBag.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZEndMissionSecuredBag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZBagType> BagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    STARBREEZE_API FSBZEndMissionSecuredBag();
};

