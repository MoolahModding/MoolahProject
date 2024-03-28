#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "SBZHeistCollectionWithOwnership.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuCrimeNet.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class USBZMainMenuCrimeNetHeistButton;
class USBZMainMenuCrimeNetHeistMapIcon;
class USBZMainMenuCrimeNetStoryModeButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNet : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuCrimeNetHeistButton> HeistButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuCrimeNetStoryModeButton> StoryModeButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_HeistButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HeistButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuCrimeNetHeistMapIcon> HeistMapIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_HeistMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuCrimeNetHeistButton* SelectedHeistButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetHeistButton*> ActiveHeistButtons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveHeistCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistCollectionWithOwnership> HeistCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetHeistButton*> HeistButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetHeistMapIcon*> HeistMapIconsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetStoryModeButton*> StoryModeButtonPool;
    
public:
    USBZMainMenuCrimeNet();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHeistCollection();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleStoryModeFilter();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHeistCollection(int32 NewIndex);
    
private:
    UFUNCTION()
    void RefreshCollections();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistCollectionChanged(const FSBZHeistCollectionWithOwnership& ActiveHeistCollection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton);
    
private:
    UFUNCTION()
    void OnHeistButtonNavigation(EUINavigation ButtonNavigation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
private:
    UFUNCTION()
    void NativeOnHeistMapIconClicked(USBZMainMenuCrimeNetHeistMapIcon* InSelectedHeistMapIcon);
    
    UFUNCTION()
    void NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnHeistButtonHovered(USBZMainMenuCrimeNetHeistMapIcon* MapIcon, bool bIsHovered);
    
    UFUNCTION()
    void NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementHeistCollection();
    
    UFUNCTION(BlueprintCallable)
    void DecrementHeistCollection();
    
};

