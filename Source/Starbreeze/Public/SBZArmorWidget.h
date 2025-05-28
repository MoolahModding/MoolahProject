#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Layout/Margin.h"
#include "SBZArmorChunkGUIData.h"
#include "SBZPlayerStateWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZArmorWidget.generated.h"

class UPanelWidget;
class USBZArmorChunkWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZArmorWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ChunkArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZArmorChunkWidget> ChunkWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HorizontalBoxPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ArmorReplenishScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZArmorChunkGUIData> ChunkDataArray;
    
public:
    USBZArmorWidget();

};

