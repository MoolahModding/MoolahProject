#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZWeaponBaseAttackData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZWeaponBaseAttackData : public UDataAsset, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
    USBZWeaponBaseAttackData();


    // Fix for true pure virtual functions not being implemented
};

