#pragma once
#include "CoreMinimal.h"
#include "SBZAgilityMontage.generated.h"

class ASBZAICharacter;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZAgilityMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZAICharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    STARBREEZE_API FSBZAgilityMontage();
};

