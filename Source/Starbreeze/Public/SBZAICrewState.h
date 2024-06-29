#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "EPD3DefeatState.h"
#include "SBZCrewStateInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZAICrewState.generated.h"

class ASBZAICrewCharacter;
class UPaperSprite;

UCLASS(Blueprintable, NotPlaceable)
class ASBZAICrewState : public AInfo, public ISBZCrewStateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Character, meta=(AllowPrivateAccess=true))
    ASBZAICrewCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAICrewCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DefeatState, meta=(AllowPrivateAccess=true))
    EPD3DefeatState DefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState OldDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsMaskOn, meta=(AllowPrivateAccess=true))
    bool bIsMaskOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CachedCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor CachedCrewAIColor;
    
public:
    ASBZAICrewState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMaskOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefeatState(EPD3DefeatState InOldDefeatState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Character(ASBZAICrewCharacter* OldCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMaskOn(bool bMaskOn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDefeatState(EPD3DefeatState InState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetCharacterIcon() const;
    

    // Fix for true pure virtual functions not being implemented
};

