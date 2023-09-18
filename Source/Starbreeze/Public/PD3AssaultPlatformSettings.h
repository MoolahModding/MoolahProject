#pragma once
#include "CoreMinimal.h"
#include "PD3AssaultPlatformSettings.generated.h"

USTRUCT(BlueprintType)
struct FPD3AssaultPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTotalAISpawnCountModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAliveAISpawnCountModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnGroupQueryCountModifier;
    
    STARBREEZE_API FPD3AssaultPlatformSettings();
};

