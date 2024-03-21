#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZLevelScriptActorBase.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZLevelScriptMainMenuActor.generated.h"

class ASBZCustomizationManager;
class ASBZMainMenuCameraManager;
class ASBZMainMenuPlayerCharacter;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLevelScriptMainMenuActor : public ASBZLevelScriptActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZMainMenuPlayerCharacter* MainMenuMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZMainMenuPlayerCharacter*> MultiplayerMannequins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZCustomizationManager* CustomizationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZMainMenuCameraManager* MainMenuCameraManager;
    
    ASBZLevelScriptMainMenuActor();
    UFUNCTION(BlueprintCallable)
    void PostInitializeComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdate(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray);
    
    UFUNCTION(BlueprintCallable)
    void OnLeft();
    
};

