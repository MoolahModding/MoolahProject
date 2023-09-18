#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_CoverSafeness.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_CoverSafeness : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EnemyContext;
    
public:
    USBZEnvQueryTest_CoverSafeness();

};

