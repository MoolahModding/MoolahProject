#pragma once
#include "CoreMinimal.h"
#include "SBZCrosshairSettings.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "SBZReticleWidget.generated.h"

class ASBZRangedWeapon;
class UCurveFloat;
class USBZWeaponSpreadData;

UCLASS(Blueprintable, EditInlineNew)
class USBZReticleWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProgressionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpreadMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentEquippableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpreadAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponSpreadData* SpreadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentScale;
    
public:
    USBZReticleWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrossHairVisibilityChanged(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrosshairSettingsChanged(const FSBZCrosshairSettings& CrosshairSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrossHairScaleChanged(float CurrentSpread);
    
};

