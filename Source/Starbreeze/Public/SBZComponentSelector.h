#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZComponentSelector.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZComponentSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* Component;
    
    FSBZComponentSelector();
};

