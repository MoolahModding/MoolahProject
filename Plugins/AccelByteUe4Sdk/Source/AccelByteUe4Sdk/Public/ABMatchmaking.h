#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CancelMatchmakingRequest.h"
#include "DCancelMatchmakingResponseDelegate.h"
#include "DDsNotifDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DMatchmakingNotifDelegate.h"
#include "DRematchmakingNotifDelegate.h"
#include "DSetReadyConsentNotifDelegate.h"
#include "DSetReadyConsentResponseDelegate.h"
#include "DSetRejectConsentNotifDelegate.h"
#include "DSetRejectConsentResponseDelegate.h"
#include "DStartMatchmakingResponseDelegate.h"
#include "SetReadyConsentRequest.h"
#include "SetRejectConsentRequest.h"
#include "StartMatchmakingRequest.h"
#include "ABMatchmaking.generated.h"

UCLASS(Blueprintable)
class UABMatchmaking : public UObject {
    GENERATED_BODY()
public:
    UABMatchmaking();
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(const FStartMatchmakingRequest& Request, FDStartMatchmakingResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetRejectConsent(const FSetRejectConsentRequest& Request, FDSetRejectConsentResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyConsent(const FSetReadyConsentRequest& Request, FDSetReadyConsentResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetOnSetRejectConsent(FDSetRejectConsentNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnSetReadyConsent(FDSetReadyConsentNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnRematchmaking(FDRematchmakingNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnMatchmaking(FDMatchmakingNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnDs(FDDsNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking(const FCancelMatchmakingRequest& Request, FDCancelMatchmakingResponse OnResponse, FDErrorHandler OnError);
    
};

