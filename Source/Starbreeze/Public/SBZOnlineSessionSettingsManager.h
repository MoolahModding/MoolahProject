#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineSessionSettingsManager.generated.h"

class USBZSessionSettings;

UCLASS(Blueprintable)
class USBZOnlineSessionSettingsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSessionSettings* PartySessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSessionSettings* GameSessionSettings;
    
public:
    USBZOnlineSessionSettingsManager();

};

