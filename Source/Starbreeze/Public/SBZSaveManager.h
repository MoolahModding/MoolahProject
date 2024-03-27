#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSaveManagerInterface.h"
#include "SBZSaveManager.generated.h"

class USBZProgressionSaveGame;
class USBZSaveManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSaveManager : public UObject, public ISBZSaveManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* ProgressionSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* DefaultProgressionSaveGame;
    
public:
    USBZSaveManager();
    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutInLobby();
    
    UFUNCTION(BlueprintPure)
    USBZProgressionSaveGame* GetProgressionSaveGame() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSaveManager* Get(const UObject* WorldContextObject);
    
    
    // Fix for true pure virtual functions not being implemented
};

