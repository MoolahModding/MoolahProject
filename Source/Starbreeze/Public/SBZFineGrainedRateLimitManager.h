#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SBZFineGrainedRateLimitManager.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZFineGrainedRateLimitManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath FGRLManagerClassName;
    
public:
    USBZFineGrainedRateLimitManager();

};

