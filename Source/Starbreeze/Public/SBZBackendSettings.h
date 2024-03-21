#pragma once
#include "CoreMinimal.h"
#include "SBZBackendSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZBackendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameSenseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTelemetryEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PopupsShownBitmask;
    
    FSBZBackendSettings();
};

