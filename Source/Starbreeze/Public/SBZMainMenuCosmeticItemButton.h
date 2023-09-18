#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuCosmeticItemButton.generated.h"

class USBZCosmeticsDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCosmeticItemButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* CosmeticItemData;
    
public:
    USBZMainMenuCosmeticItemButton();

    UFUNCTION(BlueprintCallable)
    void SetItemCount(int32 InItemCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCountChanged(int32 InItemCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCosmeticItemDataInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultItem() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeCosmeticItem(const USBZCosmeticsDataAsset* InCosmeticItemData, bool bInIsDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZCosmeticsDataAsset* GetCosmeticItemData() const;
    
};

