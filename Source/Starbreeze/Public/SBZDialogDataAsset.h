#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZDialogType.h"
#include "SBZDialogLineDefinition.h"
#include "SBZVoiceSwitchPerPerformer.h"
#include "SBZDialogDataAsset.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZDialogDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDialogLineDefinition> DialogLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeadAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHumanShieldVictimAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHostageAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVoiceSwitchPerPerformer> VoiceSwitchesPerPerformer;
    
    USBZDialogDataAsset();

};

