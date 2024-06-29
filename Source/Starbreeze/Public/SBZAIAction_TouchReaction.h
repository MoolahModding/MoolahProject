#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EPD3DefeatState.h"
#include "ESBZVoicePriority.h"
#include "SBZAIAction_Order.h"
#include "SBZAIAction_TouchReaction.generated.h"

class ASBZPlayerState;
class USBZActionNotificationAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_TouchReaction : public USBZAIAction_Order {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* PrivateVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* PublicVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ResumeVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* Escalation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PrivateToPublicTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* TargetPlayerState;
    
public:
    USBZAIAction_TouchReaction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDefeatStateChanged(ASBZPlayerState* InSBZPlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState InDefeatState);
    
};

