#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZPayDayCreditStoreItem.h"
#include "SBZPlayerStoreItemData.h"
#include "SBZStoreBaseItem.h"
#include "SBZStoreManager.generated.h"

class USBZStoreManager;

UCLASS(Blueprintable)
class USBZStoreManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZStoreBaseItem> WeaponPartCostMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZStoreBaseItem> PreplanningAssetCostMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AccelByteItemTitleToIdString;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerStoreItemData AllVendorsItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPayDayCreditStoreItem> PayDayCreditMap;
    
public:
    USBZStoreManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZStoreManager* GetStoreManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPriceProgressionLevel(const FString& PriceProgressionGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfamyLevelItemUnlockCount(int32 InfamyLevel) const;
    
};

