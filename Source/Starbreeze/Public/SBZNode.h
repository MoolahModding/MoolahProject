#pragma once
#include "CoreMinimal.h"
#include "SBZNode.generated.h"

class ASBZRoomVolume;
class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

USTRUCT(BlueprintType)
struct FSBZNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZRoomConnectorInterface> Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* Room;
    
    STARBREEZE_API FSBZNode();
};

