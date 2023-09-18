#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZQuat_NetQuantizeNormal.h"
#include "SBZDropPlaceableEquippableData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDropPlaceableEquippableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZQuat_NetQuantizeNormal Quat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize AngularVelocity;
    
    STARBREEZE_API FSBZDropPlaceableEquippableData();
};

