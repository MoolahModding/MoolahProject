#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSaveManagerInterface.h"
#include "SBZSaveManager.generated.h"

class USBZProgressionSaveChallenges;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveChallenges* ProgressionSaveChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveChallenges* DefaultProgressionSaveChallenges;
    
public:
    USBZSaveManager();

    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZProgressionSaveGame* GetProgressionSaveGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZProgressionSaveChallenges* GetProgressionSaveChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSaveManager* GetChecked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSaveManager* Get(const UObject* WorldContextObject);
    

    // Fix for true pure virtual functions not being implemented
};

