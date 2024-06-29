#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "Templates/SubclassOf.h"
#include "SBZAISquadManager.generated.h"

class APawn;
class USBZAISquad;
class USBZAISquadManager;
class USBZAISquadOrder;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, Within=PD3HeistGameMode)
class USBZAISquadManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZAISquadOrder>> SpawnOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZAISquadOrder>> RuntimeOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MemberTypeBlacklist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAISquad*> Squads;
    
public:
    USBZAISquadManager();

    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAISquadManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USBZAISquad* AddSquad(const TArray<APawn*>& Pawns);
    
};

