#pragma once
#include "CoreMinimal.h"
#include "SBZRoomPathQuery.generated.h"

class ASBZRoomVolume;
class UObject;

USTRUCT(BlueprintType)
struct FSBZRoomPathQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* StartRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* EndRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    STARBREEZE_API FSBZRoomPathQuery();
};

