#pragma once
#include "CoreMinimal.h"
#include "SBZAIGasGrenadeDifficultyData.h"
#include "SBZGasGrenadeData.h"
#include "SBZAIGasGrenadeData.generated.h"

UCLASS(Blueprintable)
class USBZAIGasGrenadeData : public USBZGasGrenadeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIGasGrenadeDifficultyData DifficultyArray[4];
    
public:
    USBZAIGasGrenadeData();

};

