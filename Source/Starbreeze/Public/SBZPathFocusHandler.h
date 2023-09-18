#pragma once
#include "CoreMinimal.h"
#include "SBZPathFocusHandler.generated.h"

class AActor;
class USBZPathFocusSettings;

USTRUCT(BlueprintType)
struct FSBZPathFocusHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPathFocusSettings* Settings;
    
public:
    STARBREEZE_API FSBZPathFocusHandler();
};

