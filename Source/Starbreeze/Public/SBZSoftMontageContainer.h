#pragma once
#include "CoreMinimal.h"
#include "SBZSoftMontageContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSoftMontageContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> Montages;
    
    FSBZSoftMontageContainer();
};

