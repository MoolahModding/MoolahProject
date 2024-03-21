#pragma once
#include "CoreMinimal.h"
#include "SBZMontageContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMontageContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    FSBZMontageContainer();
};

