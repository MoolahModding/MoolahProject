#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZConnectionInfoWidget.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZConnectionInfoWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* StarbreezePlayerState;
    
public:
    USBZConnectionInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerRegionChanged(const FString& ServerRegion);
    
};

