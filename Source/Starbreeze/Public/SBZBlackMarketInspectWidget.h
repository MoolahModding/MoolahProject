#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZBlackMarketInspectWidget.generated.h"

class ACameraActor;
class USBZGloveData;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketInspectWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* CurrentInspectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoomInputAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoomCameraRotationInputAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* InspectCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGloveData* LoadoutEquippedGloveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoomCameraPitch;
    
public:
    USBZBlackMarketInspectWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetInspectCamera(FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void SetGlovesOnMannequin(const USBZGloveData* GloveData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomizationActorLoadingChanged(bool bIsLoading);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanInspectItem(USBZInventoryBaseData* InInspectData);
    
};

