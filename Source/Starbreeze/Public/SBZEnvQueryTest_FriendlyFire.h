#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_FriendlyFire.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEnvQueryTest_FriendlyFire : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OriginContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetContext;
    
public:
    USBZEnvQueryTest_FriendlyFire();

};

