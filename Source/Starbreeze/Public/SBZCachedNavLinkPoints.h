#pragma once
#include "CoreMinimal.h"
#include "SBZCachedNavLinkPoints.generated.h"

class ISBZBlockableNavlinkInterface;
class USBZBlockableNavlinkInterface;

USTRUCT(BlueprintType)
struct FSBZCachedNavLinkPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZBlockableNavlinkInterface> NavLink;
    
    STARBREEZE_API FSBZCachedNavLinkPoints();
};

