#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponAttribute.h"
#include "SBZWeaponAttributIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponAttributIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZWeaponAttribute> ChildAttributeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    STARBREEZE_API FSBZWeaponAttributIdentifier();
};

