#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSettingsMenuCategoryInfo.h"
#include "SBZSettingsMenuConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZSettingsMenuConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSettingsMenuCategoryInfo> SettingsCategories;
    
    USBZSettingsMenuConfig();

};

