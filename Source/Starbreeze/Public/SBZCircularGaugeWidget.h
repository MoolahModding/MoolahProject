#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWidgetBase.h"
#include "SBZCircularGaugeWidget.generated.h"

class UImage;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class USBZCircularGaugeWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* CircularGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CircularGaugeMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image_Gauge;
    
public:
    USBZCircularGaugeWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateGaugeProgress(float inNewProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeThickness(float InGaugeThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor InColor);
    
};

