#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MultipleUsersStatRequests.h"
#include "SBZServerStatBatcher.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZServerStatBatcher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleUsersStatRequests CachedServerStatRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
public:
    USBZServerStatBatcher();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd(const int32 OutroVariation);
    
};

