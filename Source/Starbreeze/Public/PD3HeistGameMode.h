#pragma once
#include "CoreMinimal.h"
#include "SBZMissionGameMode.h"
#include "PD3HeistGameMode.generated.h"

class AActor;
class ASBZAICharacter;
class ASBZChatInGame;
class UPD3AssaultManager;
class USBZAISearchManager;
class USBZAISquadManager;
class USBZCivilianManager;
class USBZGlobalModifiers;
class USBZNavLinkManager;
class USBZNegotiationManager;
class USBZTrafficManager;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API APD3HeistGameMode : public ASBZMissionGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNegotiationManager* NegotiationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3AssaultManager* AssaultManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAISquadManager* AISquadManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCivilianManager* CivilianManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavLinkManager* NavLinkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZChatInGame* ChatInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZTrafficManager* TrafficManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAISearchManager* SearchManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZGlobalModifiers* GlobalModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> TransporterBrutalCarrySkillPlayerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ASBZAICharacter*> TransporterBrutalCarrySkillAISet;
    
public:
    APD3HeistGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZNegotiationManager* GetNegotiationManager() const;
    
};

