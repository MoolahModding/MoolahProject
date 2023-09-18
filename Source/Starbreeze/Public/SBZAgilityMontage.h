#pragma once
#include "CoreMinimal.h"
#include "SBZAgilityMontage.generated.h"

class UAnimMontage;
class UClass;

USTRUCT(BlueprintType)
struct FSBZAgilityMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UClass> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    STARBREEZE_API FSBZAgilityMontage();
};

