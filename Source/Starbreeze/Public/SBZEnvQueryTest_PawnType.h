#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "SBZEnvQueryTest_PawnType.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_PawnType : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery PawnTagQueryToMatch;
    
public:
    USBZEnvQueryTest_PawnType();

};

