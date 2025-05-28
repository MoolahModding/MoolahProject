#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZComponentSelector.h"
#include "SBZPropDamagePool.generated.h"

USTRUCT(BlueprintType)
struct FSBZPropDamagePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MaxHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Hits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float RejectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 RejectHits;
    
    STARBREEZE_API FSBZPropDamagePool();
};

