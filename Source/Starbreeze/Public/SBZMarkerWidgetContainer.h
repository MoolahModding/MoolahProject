#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMarkerWidgetContainer.generated.h"

class UCanvasPanel;
class USBZMarkerDataAsset;
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
    float OffScreenTransitionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffScreenRadiusPercentageArray[3];
    
public:
    USBZMarkerWidgetContainer();

private:
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(FSBZMarkerRuntime& MarkerRuntime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInsideVolumeChanged(bool bInsideVolume, const USBZMarkerDataAsset* MarkerDataAsset);
    
};

