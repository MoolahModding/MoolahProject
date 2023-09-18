#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionSaveGameData.h"
#include "SBZProgressionSaveGameInterface.h"
#include "SBZSaveGame.h"
#include "SBZProgressionSaveGame.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZProgressionSaveGame : public USBZSaveGame, public ISBZProgressionSaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProgressionSaveGameData ProgressionSaveGameData;
    
public:
    USBZProgressionSaveGame();


    // Fix for true pure virtual functions not being implemented
};

