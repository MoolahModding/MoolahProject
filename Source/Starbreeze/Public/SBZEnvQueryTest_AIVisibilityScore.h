#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_AIVisibilityScore.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class USBZEnvQueryTest_AIVisibilityScore : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
public:
    USBZEnvQueryTest_AIVisibilityScore();

};

