#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZReplicatedBinaryStateActor.h"
#include "Templates/SubclassOf.h"
#include "SBZHoldOutLootContainer.generated.h"

class ASBZHoldOutLoot;

UCLASS(Blueprintable)
class ASBZHoldOutLootContainer : public ASBZReplicatedBinaryStateActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZHoldOutLoot> LootClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHoldOutLoot* SpawnedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Open, meta=(AllowPrivateAccess=true))
    bool bReplicatedIsOpen;
    
public:
    ASBZHoldOutLootContainer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOpen(bool bInIsOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenStateChanged(bool bInIsOpen, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetOpen(bool bInIsOpen);
    
};

