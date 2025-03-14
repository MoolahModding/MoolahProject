#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIEscortStateData.h"
#include "SBZAIUtilityDecider.h"
#include "SBZSuspectData.h"
#include "SBZAIUtilityDecider_Escort.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityDecider_Escort : public USBZAIUtilityDecider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIEscortStateData EscortStates[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentSuspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSuspectData> Suspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToIgnore;
    
public:
    USBZAIUtilityDecider_Escort();

};

