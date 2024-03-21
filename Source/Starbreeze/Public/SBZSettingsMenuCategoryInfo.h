#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsMenuGroupInfo.h"
#include "Templates/SubclassOf.h"
#include "SBZSettingsMenuCategoryInfo.generated.h"

class USBZSettingsFunctions;

USTRUCT(BlueprintType)
struct FSBZSettingsMenuCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryNameLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlaystationSpecificCategoryNameLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryNameLocalizedPlaystation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasXBoxSpecificCategoryNameLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryNameLocalizedXBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSettingsFunctions> SettingsFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSettingsMenuGroupInfo> SettingsGroups;
    
    STARBREEZE_API FSBZSettingsMenuCategoryInfo();
};

