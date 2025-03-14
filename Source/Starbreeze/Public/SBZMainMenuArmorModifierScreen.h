#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlReference.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuArmorModifierScreen.generated.h"

class UPanelWidget;
class USBZMainMenuArmorChunkButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuArmorModifierScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ArmorChunkSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuArmorChunkButton> ArmorChunkTypeButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuArmorChunkButton* EquippedArmorChunkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference OkControlReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuArmorChunkButton*> ArmorChunkButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuArmorChunkButton* SelectedArmorChunkButton;
    
public:
    USBZMainMenuArmorModifierScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNewEquippedButton(USBZMainMenuArmorChunkButton* InEquippedArmorChunkButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenInitialized();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorChunkSlotButtonSelected(const USBZMainMenuArmorChunkButton* SelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorChunkSlotButtonEquipped(const USBZMainMenuArmorChunkButton* EquippedButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArmorChunkButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorChunkButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewArmorChunkSlotFocused(const USBZMainMenuArmorChunkButton* NewFocusedButton);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitializeArmorChunkCustomization(int32 InArmorLoadoutIndex, int32 InArmorChunkIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentArmorChunkIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetArmorInfo(int32& OutArmorLoadoutIndex, int32& OutArmorChunkIndex);
    
};

