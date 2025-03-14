#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZTickOverskillBaseAbility.generated.h"

class ASBZPlayerState;
class USBZOverskillLoadoutData;

UCLASS(Blueprintable)
class USBZTickOverskillBaseAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OwnerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillLoadoutData* OverskillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillLoadoutData* OriginalOverskillData;
    
public:
    USBZTickOverskillBaseAbility();

};

