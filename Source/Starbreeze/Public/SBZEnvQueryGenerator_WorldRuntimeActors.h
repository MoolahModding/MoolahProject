#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "SBZEnvQueryGenerator_WorldRuntimeActors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZEnvQueryGenerator_WorldRuntimeActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ActorSetting;
    
public:
    USBZEnvQueryGenerator_WorldRuntimeActors();

};

