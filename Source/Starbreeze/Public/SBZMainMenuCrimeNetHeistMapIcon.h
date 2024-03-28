#pragma once
#include "CoreMinimal.h"
#include "OnMapIconButtonClickedDelegate.h"
#include "OnMapIconButtonHoveredDelegate.h"
#include "SBZHUDWidgetBase.h"
#include "SBZMainMenuCrimeNetHeistMapIcon.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetHeistMapIcon : public USBZHUDWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapIconButtonHovered OnButtonHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapIconButtonClicked OnButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPD3HeistDataAsset* HeistData;
    
public:
    USBZMainMenuCrimeNetHeistMapIcon();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelected(bool bInIsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistDataInitialized();
    
    UFUNCTION(BlueprintCallable)
    void InitializeHeistData(const UPD3HeistDataAsset* InHeistData);
    
    UFUNCTION(BlueprintPure)
    UPD3HeistDataAsset* GetHeistData() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonHoveredChanged(bool bInIsHovered);
    
};

