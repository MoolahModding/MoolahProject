#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterInventoryData.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuInventoryCharacterSlotButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryCharacterSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCharacterInventoryData CharacterSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InventoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreferredValueIndex;
    
public:
    USBZMainMenuInventoryCharacterSlotButton();
    UFUNCTION(BlueprintCallable)
    void SetPreferredValueIndex(int32 InPreferredValueIndex);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreferredValueIndexChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterSlotInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPreferredCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeCharacterSlotData(int32 InInventoryIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayPreferredIndex() const;
    
    UFUNCTION(BlueprintPure)
    FSBZCharacterInventoryData GetCharacterSlotData() const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectPreferredCharacter();
    
};

