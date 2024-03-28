#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaRequestResult.h"
#include "SBZPreplanningAssetManager.generated.h"

class USBZPreplanningAssetData;
class USBZPreplanningAssetManager;

UCLASS(Blueprintable)
class USBZPreplanningAssetManager : public UObject {
    GENERATED_BODY()
public:
    USBZPreplanningAssetManager();
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPreplanningAssetManager* GetPreplanningAssetManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    USBZPreplanningAssetData* GetAssetBySku(const FString& InAssetSku) const;
    
    UFUNCTION()
    void ConsumeUserEntitlementSuccess(ESBZMetaRequestResult Result);
    
    UFUNCTION()
    void ConsumeUserEntitlementError(ESBZMetaRequestResult Result);
    
};

