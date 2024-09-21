#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_DespawnPawnType.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class USBZEnvQueryTest_DespawnPawnType : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> PawnTypeContext;
    
public:
    USBZEnvQueryTest_DespawnPawnType();

};

