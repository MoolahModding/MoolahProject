#pragma once
#include "CoreMinimal.h"
#include "SBZBuiltInAnimMontageInstance.generated.h"

class USBZBuiltInAnimMontage;

USTRUCT(BlueprintType)
struct FSBZBuiltInAnimMontageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBuiltInAnimMontage* AnimMontage;
    
    STARBREEZE_API FSBZBuiltInAnimMontageInstance();
};

