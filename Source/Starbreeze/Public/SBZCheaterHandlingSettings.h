#pragma once
#include "CoreMinimal.h"
#include "ESBZCheaterPolicyType.h"
#include "ESBZNotOwningHeistPolicyType.h"
#include "SBZCheaterHandlingSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZCheaterHandlingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCheaterPolicyType CheaterPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNotOwningHeistPolicyType NotOwningHeistPolicyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BanPeriodInDays;
    
    STARBREEZE_API FSBZCheaterHandlingSettings();
};

