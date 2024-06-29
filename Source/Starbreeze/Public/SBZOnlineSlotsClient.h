#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZSlotData.h"
#include "SBZOnlineSlotsClient.generated.h"

UCLASS(Blueprintable, Config=Starbeeze)
class STARBREEZE_API USBZOnlineSlotsClient : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSlotData> SlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PreMatchReadyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfoUi> CharacterInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSlotData LocalPlayerData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreTravelTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SoloPreplanningItem;
    
public:
    USBZOnlineSlotsClient();

};

