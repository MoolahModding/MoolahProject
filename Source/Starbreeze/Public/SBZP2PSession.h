#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnSessionJoinStartedDelegate.h"
#include "SBZOnSessionJoinedDelegate.h"
#include "SBZP2PSession.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZP2PSession : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoined OnSessionJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoinStarted OnSessionJoinStarted;
    
    USBZP2PSession();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded(UWorld* InWorld);
    
};

