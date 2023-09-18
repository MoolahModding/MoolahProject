#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.generated.h"

class UActorComponent;
class UClass;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZComponentSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* Component;
    
    FSBZComponentSelector();
};

