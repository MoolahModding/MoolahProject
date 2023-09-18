#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsMenuGroupInfo.h"
#include "SBZSettingsMenuCategoryInfo.generated.h"

class UClass;

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
    UClass* SettingsFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSettingsMenuGroupInfo> SettingsGroups;
    
    STARBREEZE_API FSBZSettingsMenuCategoryInfo();
};

