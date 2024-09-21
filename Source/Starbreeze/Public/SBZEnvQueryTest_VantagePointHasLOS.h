#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_VantagePointHasLOS.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class USBZEnvQueryTest_VantagePointHasLOS : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TargetContext;
    
    USBZEnvQueryTest_VantagePointHasLOS();

};

