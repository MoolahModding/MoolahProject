#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3HUDPlayerStatusWidget.generated.h"

class ASBZPlayerState;
class UImage;
class UPD3DefeatTimerWidget;
class UPD3DetectionMeterContainer;
class UPD3HUDPlayerCarryWidget;
class UPD3HUDPlayerCombinedHealthWidget;
class UPD3HUDPlayerDefeatStateWidget;
class UPD3HUDRoomStatusWidget;
class UPD3KeyItemContainer;
class UPD3OverkillWeaponRequestWidget;
class UPD3PlaceableStatusWidget;
class UPD3ReviveInteractionWidget;
class UPD3ThrowableStatusWidget;
class UPD3ToolStatusWidget;
class UPD3WeaponStatusWidget;
class USBZCharacterEffectContainer;
class USBZInteractionWidget;
class USBZReticleWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPlayerStatusWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerCombinedHealthWidget* Widget_CombinedHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerStateWidgetBase* Widget_DownedCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3WeaponStatusWidget* Widget_PrimaryWeaponAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3WeaponStatusWidget* Widget_SecondaryWeaponAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3WeaponStatusWidget* Widget_OverkillWeaponAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerDefeatStateWidget* Widget_PlayerDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3DefeatTimerWidget* Widget_DefeatTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerCarryWidget* Widget_CarryStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3ReviveInteractionWidget* Widget_Revive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZReticleWidget* Widget_Reticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3ThrowableStatusWidget* Widget_Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3OverkillWeaponRequestWidget* Widget_RequestOverkillWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3PlaceableStatusWidget* Widget_Placeable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3ToolStatusWidget* Widget_ToolStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDRoomStatusWidget* Widget_RoomStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractionWidget* Widget_Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3DetectionMeterContainer* Widget_DetectionMeterContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3KeyItemContainer* Widget_KeyItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectContainer* Widget_CharacterEffectsContainer;
    
public:
    UPD3HUDPlayerStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformChanged(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfamyLevelChanged(ASBZPlayerState* InPlayerState);
    
};

