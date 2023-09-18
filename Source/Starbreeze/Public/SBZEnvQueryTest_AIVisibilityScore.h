#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_AIVisibilityScore.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_AIVisibilityScore : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Context;
    
public:
    USBZEnvQueryTest_AIVisibilityScore();

};

