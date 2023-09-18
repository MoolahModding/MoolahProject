#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZAssetLookupData.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class USBZAssetLookupData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPhysicalMaterial>> PhysicalMaterialPtrArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPhysicalMaterial>, int32> PhysicalMaterialPtrToArrayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> PhysicalMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicalMaterialIndexBitCount;
    
public:
    USBZAssetLookupData();

};

