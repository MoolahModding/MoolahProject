#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAIAvoidVehicleAbility.generated.h"

class ASBZAIBaseCharacter;
class ASBZWheeledVehicle;

UCLASS(Blueprintable)
class USBZAIAvoidVehicleAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIBaseCharacter* AICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* CurrentVehicle;
    
public:
    USBZAIAvoidVehicleAbility();

private:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
};

