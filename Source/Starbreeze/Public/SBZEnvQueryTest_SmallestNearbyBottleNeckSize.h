#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_SmallestNearbyBottleNeckSize.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_SmallestNearbyBottleNeckSize : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCheck;
    
public:
    USBZEnvQueryTest_SmallestNearbyBottleNeckSize();

};

