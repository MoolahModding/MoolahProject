#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnCircularWidgetSelectedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZCircularInteractionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZCircularInteractionWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName XAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName YAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D CurrentAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngleRad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SliceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCircularWidgetSelected OnCircularWidgetSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRememberActiveIndex;
    
public:
    USBZCircularInteractionWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateNumSlices(int32 InNumSlices);
    
    UFUNCTION(BlueprintCallable)
    void SelectCurrentIndex();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumSectionsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndexChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateCircularWidget(bool bShouldActive);
    
};

