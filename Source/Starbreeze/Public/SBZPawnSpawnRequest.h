#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnSignificance.h"
#include "Templates/SubclassOf.h"
#include "SBZPawnSpawnRequest.generated.h"

class ASBZPawnSpawnBase;
class UGameplayEffect;
class USBZAIAction;
class USBZPawnSpawnRequestData;

USTRUCT(BlueprintType)
struct FSBZPawnSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPawnSpawnRequestData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZPawnSpawnBase> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnSignificance Significance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    STARBREEZE_API FSBZPawnSpawnRequest();
};

