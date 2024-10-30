#pragma once
#include "CoreMinimal.h"
#include "SBZEntitlementTelemetryData.h"
#include "SBZEntitlementsTelemetryPayload.generated.h"

USTRUCT(BlueprintType)
struct FSBZEntitlementsTelemetryPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEntitlementTelemetryData> Items;
    
    STARBREEZE_API FSBZEntitlementsTelemetryPayload();
};

