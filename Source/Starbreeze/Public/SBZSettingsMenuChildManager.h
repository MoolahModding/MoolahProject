#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSettingsMenuChildData.h"
#include "SBZSettingsMenuChildManager.generated.h"

UCLASS(Blueprintable)
class USBZSettingsMenuChildManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSettingsMenuChildData> Items;
    
    USBZSettingsMenuChildManager();

};

