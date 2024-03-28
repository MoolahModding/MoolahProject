#pragma once
#include "CoreMinimal.h"
#include "SBZGrenade.h"
#include "SBZFlashBangGrenade.generated.h"

class UCapsuleComponent;

UCLASS(Abstract, Blueprintable)
class ASBZFlashBangGrenade : public ASBZGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollision;
    
public:
    ASBZFlashBangGrenade();
};

