#pragma once
#include "CoreMinimal.h"
#include "SBZMontageSectionSwitchRequest.generated.h"

class UAnimMontage;
class USBZAutoSectionSwitchNotifyState;

USTRUCT(BlueprintType)
struct FSBZMontageSectionSwitchRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAutoSectionSwitchNotifyState* NotifyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    STARBREEZE_API FSBZMontageSectionSwitchRequest();
};

