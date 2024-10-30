#pragma once
#include "CoreMinimal.h"
#include "ESBZHeistType.h"
#include "SBZJoinableHeistData.h"
#include "SBZMainMenuCrimeNetHeistMapIcon.h"
#include "SBZServerBrowserHeistMapWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZServerBrowserHeistMapWidget : public USBZMainMenuCrimeNetHeistMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZHeistType HeistType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZJoinableHeistData JoinableHeistData;
    
public:
    USBZServerBrowserHeistMapWidget();

};

