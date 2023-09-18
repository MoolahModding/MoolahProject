#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.h"
#include "SBZWidgetBase.h"
#include "SBZMarkerWidgetContainer.generated.h"

class UCanvasPanel;
class UClass;

UCLASS(Blueprintable, EditInlineNew)
class USBZMarkerWidgetContainer : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Root_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MarkerWidgetClass;
    
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

