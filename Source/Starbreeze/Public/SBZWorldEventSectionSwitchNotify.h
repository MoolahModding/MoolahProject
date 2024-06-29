#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZWorldEventSectionSwitchNotify.generated.h"

class USBZWorldEventData;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZWorldEventSectionSwitchNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWorldEventData* EventData;
    
public:
    USBZWorldEventSectionSwitchNotify();

};

