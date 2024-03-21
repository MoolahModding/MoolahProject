#pragma once
#include "CoreMinimal.h"
#include "ESBZReplaySpectatorView.h"
#include "SBZGameSpectatorPawn.h"
#include "SBZReplaySpectatorPawn.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZReplaySpectatorPawn : public ASBZGameSpectatorPawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZReplaySpectatorView SpectatorView;
    
public:
    ASBZReplaySpectatorPawn();
};

