#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPropDamageContext.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FSBZPropDamageContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FromDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterInstigator;
    
    STARBREEZE_API FSBZPropDamageContext();
};

