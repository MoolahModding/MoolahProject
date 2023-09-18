#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterRevivedDelegate.h"
#include "CharacterTakenDamageDelegate.h"
#include "OnGameStateReceivedDelegate.h"
#include "OnPlayerStartTravelDelegate.h"
#include "OnPlayerStateAddedDelegate.h"
#include "OnPlayerStateRemovedDelegate.h"
#include "SBZAICrewChatEvent.h"
#include "SBZAICrewChatMessageEventDelegate.h"
#include "SBZAICrewDefeatStateChangedData.h"
#include "SBZAICrewDefeatStateChangedDelegateDelegate.h"
#include "SBZGameDifficultyChangedDelegate.h"
#include "SBZGameEventSignatureDelegate.h"
#include "SBZOnFBIActivationDelegate.h"
#include "SBZOnKeyItemCountChangedDelegate.h"
#include "SBZOnMatchmakingStartedDelegateDelegate.h"
#include "SBZOnPlayerBeginPlayStateDelegate.h"
#include "SBZOnPlayerInEscapeChangedDelegate.h"
#include "SBZOnPlayerPingedDelegate.h"
#include "SBZOnSharedKeyItemTagChangedDelegate.h"
#include "SBZPlayerCallEvent.h"
#include "SBZPlayerCallMessageEventDelegate.h"
#include "SBZPlayerChatEvent.h"
#include "SBZPlayerChatMessageEventDelegate.h"
#include "SBZPlayerDefeatStateChangedData.h"
#include "SBZPlayerDefeatStateChangedDelegateDelegate.h"
#include "SBZPreMatchAsyncLoadingCancelDelegate.h"
#include "SBZPreMatchAsyncLoadingDoneDelegate.h"
#include "SBZPreMatchAsyncLoadingProgressDelegate.h"
#include "SBZSystemChatEvent.h"
#include "SBZSystemChatMessageEventDelegate.h"
#include "SBZVotingChatMessageEventDelegate.h"
#include "SBZGameEventBroker.generated.h"

UCLASS(Blueprintable)
class USBZGameEventBroker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStateReceived OnGameStateReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterTakenDamage OnTakenDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterRevived OnRevive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStartTravel OnPlayerStartTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateAdded OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateRemoved OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerInEscapeChanged OnPlayerInEscapeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerChatMessageEvent OnPlayerChatMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAICrewChatMessageEvent OnCrewAIChatMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSystemChatMessageEvent OnSystemChatMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVotingChatMessageEvent OnVotingChatMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerCallMessageEvent OnCallMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerPinged OnPlayerPingedReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnKeyItemCountChanged OnKeyItemCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSharedKeyItemTagChanged OnSharedKeyItemTagChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerBeginPlayState OnPlayerBeginPlayState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnHeistGoneLoud;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerChatMessageEvent OnChatMessageSent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerCallMessageEvent OnCallMessageSent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDefeatStateChangedDelegate OnPlayerDefeatStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAICrewDefeatStateChangedDelegate OnAICrewDefeatStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnWaitActionPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnActionPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnGameStartPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnWaitMainMenuPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameEventSignature OnNotLoggedInEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameDifficultyChanged OnGameDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPreMatchAsyncLoadingProgress OnPreMatchAsyncLoadingProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnMatchmakingStartedDelegate OnMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPreMatchAsyncLoadingDone OnPreMatchAsyncLoadingDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPreMatchAsyncLoadingCancel OnPreMatchAsyncLoadingCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnFBIActivation OnFBIActivation;
    
    USBZGameEventBroker();

    UFUNCTION(BlueprintCallable)
    void SendChatMessage(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void SendCallMessage(const FSBZPlayerCallEvent& CallEventData);
    
    UFUNCTION(BlueprintCallable)
    void PostOnSystemChatMessageReceived(const FSBZSystemChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void PostOnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintCallable)
    void PostOnPlayerChatMessageRecieved(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void PostOnCrewAIChatMessageReceived(const FSBZAICrewChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void PostOnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData);
    
};

