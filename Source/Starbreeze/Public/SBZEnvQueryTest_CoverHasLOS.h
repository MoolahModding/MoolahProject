#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_CoverHasLOS.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_CoverHasLOS : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetContext;
    
    USBZEnvQueryTest_CoverHasLOS();

};

