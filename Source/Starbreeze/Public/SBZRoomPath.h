#pragma once
#include "CoreMinimal.h"
#include "SBZRoomPath.generated.h"

class ASBZRoomVolume;
class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

USTRUCT(BlueprintType)
struct FSBZRoomPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISBZRoomConnectorInterface>> Connectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> Rooms;
    
    STARBREEZE_API FSBZRoomPath();
};

