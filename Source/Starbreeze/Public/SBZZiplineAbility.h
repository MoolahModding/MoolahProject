#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZZiplineAbility.generated.h"

class USBZCharacterMovementComponent;

UCLASS(Blueprintable)
class USBZZiplineAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementComponent* MovementComponent;
    
public:
    USBZZiplineAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
};

