#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZReplayFileRecorder.generated.h"

class USBZGameInstance;

UCLASS(Blueprintable, Transient)
class STARBREEZE_API USBZReplayFileRecorder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
public:
    USBZReplayFileRecorder();

};

