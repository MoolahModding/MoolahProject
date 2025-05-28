#pragma once
#include "CoreMinimal.h"
#include "SBZSharedWeaponParentLock.generated.h"

USTRUCT(BlueprintType)
struct FSBZSharedWeaponParentLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnlockWeaponSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockWeaponRequiredLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockWeaponCurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedByOtherWeapon;
    
    STARBREEZE_API FSBZSharedWeaponParentLock();
};

