#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SBZSaveGame.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZSaveGame : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestVersion;
    
public:
    USBZSaveGame();

};

