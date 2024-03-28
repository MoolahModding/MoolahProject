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
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveItem(bool bIsActiveItem);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemDataInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(const USBZInventoryBaseData* InventoryBaseData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeInventoryItem(const FSBZPlayerUiItemInfo& InItemData);
    
    UFUNCTION(BlueprintPure)
    FText GetSkillName() const;
    
    UFUNCTION(BlueprintPure)
    ESBZUIItemSource GetItemSource() const;
    
    UFUNCTION(BlueprintPure)
    USBZInventoryBaseData* GetItemData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInfamyLevel() const;
    
};

