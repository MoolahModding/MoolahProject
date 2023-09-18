#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_VantagePointHasLOS.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_VantagePointHasLOS : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetContext;
    
    USBZEnvQueryTest_VantagePointHasLOS();

};

