#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnSessionJoinStartedDelegate.h"
#include "SBZOnSessionJoined_DEPRECATEDDelegate.h"
#include "SBZP2PSession.generated.h"

class USBZP2PChatSessionManager;
class UWorld;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZP2PSession : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoined_DEPRECATED OnSessionJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSessionJoinStarted OnSessionJoinStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZP2PChatSessionManager* P2PChatManager;
    
public:
    USBZP2PSession();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded(UWorld* InWorld);
    
};

