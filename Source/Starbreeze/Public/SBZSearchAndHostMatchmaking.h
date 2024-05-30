#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZOnlineCode.h"
#include "SBZMatchmaking.h"
#include "SBZSearchAndHostMatchmaking.generated.h"

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZSearchAndHostMatchmaking : public USBZMatchmaking {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSearchesPerRequest;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatSearchDelayMin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatSearchDelayMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostConnectionDelayMin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostConnectionDelayMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerLevelDeltaSmall;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerLevelDeltaMedium;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPartyDropInEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayTimer;
    
public:
    USBZSearchAndHostMatchmaking();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode Result);
    
};

