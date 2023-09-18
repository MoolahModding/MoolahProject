#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_DespawnPawnType.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_DespawnPawnType : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PawnTypeContext;
    
public:
    USBZEnvQueryTest_DespawnPawnType();

};

