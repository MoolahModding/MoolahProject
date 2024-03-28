#pragma once
#include "CoreMinimal.h"
#include "SBZPingWidget.h"
#include "SBZNetInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZNetInfoWidget : public USBZPingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ServerRegion;
    
public:
    USBZNetInfoWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnValidPlayerState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnServerRegionChanged();
    
};

