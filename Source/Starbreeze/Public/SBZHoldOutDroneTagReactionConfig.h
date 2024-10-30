#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutDroneTagReactionSelectionConfig.h"
#include "Templates/SubclassOf.h"
#include "SBZHoldOutDroneTagReactionConfig.generated.h"

class ASBZHoldOutDroneReaction;

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneTagReactionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDroneTagReactionSelectionConfig SelectionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoredOnDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoredOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireAndForget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VOTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZHoldOutDroneReaction> DroneReactionClass;
    
    STARBREEZE_API FSBZHoldOutDroneTagReactionConfig();
};

