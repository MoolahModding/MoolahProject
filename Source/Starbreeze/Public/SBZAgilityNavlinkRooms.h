#pragma once
#include "CoreMinimal.h"
#include "SBZAgilityNavlinkRooms.generated.h"

class ASBZRoomVolume;

USTRUCT(BlueprintType)
struct FSBZAgilityNavlinkRooms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZRoomVolume> LeftRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZRoomVolume> RightRoom;
    
    STARBREEZE_API FSBZAgilityNavlinkRooms();
};

