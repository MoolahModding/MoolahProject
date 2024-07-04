#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZGlobalModifiers.generated.h"

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZGlobalModifiers : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> ModifierValues;
    
public:
    USBZGlobalModifiers();

};

