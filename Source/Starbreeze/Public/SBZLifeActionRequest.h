#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLifeActionRequest.generated.h"

class AActor;
class USBZLifeActionAffinitytData;
class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

USTRUCT(BlueprintType)
struct FSBZLifeActionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpecificActionComponentOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* SpecificActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionInstance* SpecificActionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* SpecificActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLifeActionAffinitytData* SpecificAffinityData;
    
    STARBREEZE_API FSBZLifeActionRequest();
};

