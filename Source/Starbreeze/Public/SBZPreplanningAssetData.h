#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZInventoryBaseData.h"
#include "SBZPreplanningAssetData.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZPreplanningAssetData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    USBZPreplanningAssetData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ApplyPreplanningAsset(UObject* WorldContextObject) const;
    
};

