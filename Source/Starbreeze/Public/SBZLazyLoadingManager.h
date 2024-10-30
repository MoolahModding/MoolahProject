#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFetchStatItemsValueQueryArray.h"
#include "SBZLazyLoadingManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLazyLoadingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZFetchStatItemsValueQueryArray> FetchStatItemsValueQueries;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSBZFetchStatItemsValueQueryArray> PinnedFetchStatItemsValueQueries;
    
public:
    USBZLazyLoadingManager();

};

