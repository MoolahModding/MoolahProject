#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZPageCycler.generated.h"

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=StarbreezeUI)
class STARBREEZE_API USBZPageCycler : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMKBActionNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DecrementActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncrementActionName;
    
public:
    USBZPageCycler();

};

