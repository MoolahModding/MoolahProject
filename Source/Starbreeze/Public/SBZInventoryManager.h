#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZCosmeticsInventoryItem.h"
#include "SBZItemEntitlementArray.h"
#include "SBZItemRewardRequestEntry.h"
#include "SBZInventoryManager.generated.h"

class USBZCosmeticsPartSlot;
class USBZInventoryManager;
class USBZPlayerInventory;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInventoryManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerInventory* PlayerInventory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemRewardRequestEntry> RewardRequestArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FSBZItemEntitlementArray> ServerPlayerOwnedItemAccelByteItemIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZCosmeticsInventoryItem> InventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OwningEntitlementIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OwningItemIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> OwnedHeistSkus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> VendorPermissionArray;
    
public:
    USBZInventoryManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCosmeticsInventoryItemsForType(const USBZCosmeticsPartSlot* CosmeticsPartSlot, TArray<FSBZCosmeticsInventoryItem>& CosmeticsInventoryItemArrayOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInventoryManager* BP_GetInventoryManager(const UObject* WorldContextObject);
    
};

