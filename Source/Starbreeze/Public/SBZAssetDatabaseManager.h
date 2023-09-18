#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZAssetDatabaseManagerInterface.h"
#include "SBZAssetDatabaseManager.generated.h"

class USBZItemDataContainer;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAssetDatabaseManager : public UObject, public ISBZAssetDatabaseManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZItemDataContainer*> AssetItemSkuMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, USBZItemDataContainer*> AssetItemIdMap;
    
public:
    USBZAssetDatabaseManager();


    // Fix for true pure virtual functions not being implemented
};

