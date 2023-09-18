#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_IsContextActor.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_IsContextActor : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ActorContext;
    
public:
    USBZEnvQueryTest_IsContextActor();

};

