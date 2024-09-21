#pragma once
#include "CoreMinimal.h"
#include "ESBZUIItemSource.h"
#include "SBZMenuButton.h"
#include "SBZPlayerUiItemInfo.h"
#include "SBZMainMenuInventoryItemSlotButton.generated.h"

class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryItemSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZUIItemSource ItemSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText SkillName;
    
public:
    USBZMainMenuInventoryItemSlotButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveItem(bool bIsActiveItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(const USBZInventoryBaseData* InventoryBaseData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeInventoryItem(const FSBZPlayerUiItemInfo& InItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSkillName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZUIItemSource GetItemSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryBaseData* GetItemData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfamyLevel() const;
    
};

