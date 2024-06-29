#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMergePartyPlayerInfo.h"
#include "SBZMergePartyManager.generated.h"

class ASBZPlayerState;
class USBZMergePartyManager;

UCLASS(Blueprintable)
class USBZMergePartyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZPlayerState*, FSBZMergePartyPlayerInfo> ServerPlayerLeavingResultStateMap;
    
public:
    USBZMergePartyManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZMergePartyManager* GetMergePartyManager(UObject* WorldContextObject);
    
};

