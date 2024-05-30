#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZVote.generated.h"

class USBZVotingManager;

UCLASS(Blueprintable, Config=Starbreeze)
class USBZVote : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVotingManager* VotingManager;
    
public:
    USBZVote();

};

