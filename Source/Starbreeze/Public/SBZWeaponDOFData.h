#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZCameraDOF.h"
#include "SBZWeaponDOFData.generated.h"

UCLASS(Blueprintable, Const)
class USBZWeaponDOFData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraDOF NormalDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraDOF TargetingDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraDOF TopPassNormalDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCameraDOF TopPassTargetingDOF;
    
    USBZWeaponDOFData();

};

