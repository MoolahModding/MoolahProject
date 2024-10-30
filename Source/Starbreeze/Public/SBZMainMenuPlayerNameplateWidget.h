#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZUser.h"
#include "SBZMainMenuPlayerNameplateWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPlayerNameplateWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
public:
    USBZMainMenuPlayerNameplateWidget();

    UFUNCTION(BlueprintCallable)
    void RequestUserLevelData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetUserData(const FSBZUser& InUserData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetRenownLevel(int32 RenownLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetLobbyInfo(const FSBZLobbyCharacterInfoUi& InLobbyInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetInfamyLevel(int32 InfamyLevel);
    
};

