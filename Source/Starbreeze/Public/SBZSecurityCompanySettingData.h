#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZPlayerAbilityBuffType.h"
#include "SBZSecurityCompanySettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanySettingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 IndestructibleCamerasMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CameraRuntimeLimitMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LeadGuardMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DebilitatingSpecialsMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FacialRecognitionMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ArmorPiercingMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BuddySystemMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AlphaStrikeMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HardBargainMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AICoreMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ReflectorShieldsMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AIShieldingMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPiercingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DebilitatingPawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZPlayerAbilityBuffType> DebilitatingBuffsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HardBargainMinHostageRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuddySystemIgnoreTags;
    
    STARBREEZE_API FSBZSecurityCompanySettingData();
};

