#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMarkerWidgetContainer.generated.h"

class UCanvasPanel;
class USBZMarkerWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZMarkerWidgetContainer : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Root_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMarkerWidget> MarkerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffScreenRadiusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffScreenTransitionTime;
    
public:
    USBZMarkerWidgetContainer();

private:
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(FSBZMarkerRuntime& MarkerRuntime);
    
};

