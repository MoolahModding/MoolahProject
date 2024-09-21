#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZPriceProgressionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZPriceProgressionSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WeeklyResetPriceGroups;
    
    USBZPriceProgressionSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetWeeklyResetPriceGroupSettings();
    
};

