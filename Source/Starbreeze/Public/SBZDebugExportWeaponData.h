#pragma once
#include "CoreMinimal.h"
#include "SBZDebugExportWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDebugExportWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreset;
    
    STARBREEZE_API FSBZDebugExportWeaponData();
};

