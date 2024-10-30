#pragma once
#include "CoreMinimal.h"
#include "SBZAnalyticsProvider.h"
#include "SBZMockAnalyticsProvider.generated.h"

UCLASS(Blueprintable)
class SBZANALYTICSLEGACY_API USBZMockAnalyticsProvider : public USBZAnalyticsProvider {
    GENERATED_BODY()
public:
    USBZMockAnalyticsProvider();

};

