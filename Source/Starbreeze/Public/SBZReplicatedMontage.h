#pragma once
#include "CoreMinimal.h"
#include "SBZReplicatedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZReplicatedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Position;
    
    STARBREEZE_API FSBZReplicatedMontage();
};

