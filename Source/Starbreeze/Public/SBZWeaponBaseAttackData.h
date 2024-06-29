#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZWeaponBaseAttackData.generated.h"

class UGameplayEffect;
class USBZDamageType;

UCLASS(Blueprintable)
class USBZWeaponBaseAttackData : public UDataAsset, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
    USBZWeaponBaseAttackData();


    // Fix for true pure virtual functions not being implemented
};

