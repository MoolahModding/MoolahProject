#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZReplayEventInfo.h"
#include "SBZReplayFilePlayer.generated.h"

class ASBZReplayPlayerController;
class UDemoNetDriver;
class USBZGameInstance;

UCLASS(Blueprintable, Transient)
class STARBREEZE_API USBZReplayFilePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDemoNetDriver* ReplayNetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZReplayPlayerController* ReplayPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZReplayEventInfo> ReplayEvents;
    
public:
    USBZReplayFilePlayer();

};

