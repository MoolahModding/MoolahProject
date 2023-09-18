#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.generated.h"

class UCanvasPanelSlot;
class USBZMarkerDataAsset;
class USBZMarkerWidget;
class USceneComponent;

USTRUCT(BlueprintType)
struct FSBZMarkerRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMarkerWidget* MarkerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* PanelSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    STARBREEZE_API FSBZMarkerRuntime();
};

