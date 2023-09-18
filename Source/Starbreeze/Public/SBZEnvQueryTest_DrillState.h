#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESBZDrillState.h"
#include "SBZEnvQueryTest_DrillState.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_DrillState : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchNonDrills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZDrillState> MatchState;
    
public:
    USBZEnvQueryTest_DrillState();

};

