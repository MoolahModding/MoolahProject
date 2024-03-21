#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZPartyInvitationSystem.h"
#include "ESBZPartyInvitationType.h"
#include "ESBZPartyInviteStatus.h"
#include "SBZPartyInvitation.generated.h"

USTRUCT(BlueprintType)
struct FSBZPartyInvitation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InvitationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InviteExpirationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPartyInvitationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPartyInvitationSystem System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPartyInviteStatus Status;
    
    STARBREEZE_API FSBZPartyInvitation();
};

