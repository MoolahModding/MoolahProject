#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuPreplanningPlayerStatusWidget.generated.h"

class USBZBaseInventoryItemVisualsWidget;
class USBZEquippableData;
class USBZThrowableData;
class USBZToolData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPreplanningPlayerStatusWidget : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* Widget_PrimaryWeaponVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* Widget_SecondaryWeaponVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* Widget_ThrowableVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* Widget_PlaceableVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* Widget_ToolVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZToolData* Tool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* Placeable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZThrowableData* Throwable;
    
public:
    USBZMainMenuPreplanningPlayerStatusWidget();

    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void OpenPlayerProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyPlayerStatusUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenPlayerProfile();
    
};

