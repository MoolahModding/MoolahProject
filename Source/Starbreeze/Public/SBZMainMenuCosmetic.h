#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZItemCategory.h"
#include "ESBZMainMenuCosmeticType.h"
#include "ESBZMetaRequestResult.h"
#include "SBZEquippablePartConfigGroup.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZStoreBaseItem.h"
#include "SBZMainMenuCosmetic.generated.h"

class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZModularPartConfig;
class USBZModularPartDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuCosmetic : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZMainMenuCosmeticType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZCosmeticsPartSlot*, FSBZEquippablePartConfigGroup> AddEquippableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZCosmeticsPartSlot*, USBZModularPartDataAsset*> LastBuyDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText LastFailedBuyDisplayName;
    
public:
    USBZMainMenuCosmetic();

protected:
    UFUNCTION(BlueprintCallable)
    void PopulateStoreItems(ESBZItemCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddStoreItem(const USBZCosmeticsDataAsset* AssetData, const FSBZStoreBaseItem& StoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectButtonDown() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Display(ESBZMainMenuCosmeticType InType, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Buy(const TMap<USBZCosmeticsPartSlot*, USBZModularPartDataAsset*>& InBuyDataMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBuyDone(bool bIsSuccess, ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnApplyPreviewDone(bool bIsSuccess, ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMaskPreview();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEquippablePreview(const TMap<USBZCosmeticsPartSlot*, USBZModularPartDataAsset*>& InPreviewDataMap, const TMap<USBZCosmeticsPartSlot*, USBZModularPartConfig*>& InPreviewConfigMap);
    
};

