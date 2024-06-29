#pragma once
#include "CoreMinimal.h"
#include "SBZAISquadOrder.h"
#include "SBZAIOrder_Search.generated.h"

class ASBZRoomVolume;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Search : public USBZAISquadOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomToSearch;
    
public:
    USBZAIOrder_Search();

};

