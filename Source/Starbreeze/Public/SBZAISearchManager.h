#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPD3HeistState.h"
#include "SBZInvestigationData.h"
#include "SBZInvestigationRequest.h"
#include "SBZAISearchManager.generated.h"

class AActor;
class APawn;
class ASBZRoomVolume;
class UClass;
class USBZAIOrder;
class USBZAISearchManager;
class USBZAISquad;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZAISearchManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* InvestigateOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaximumSearchSquadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SearchOrder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CivilianEvacuateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageEvacutingCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumInvestigateUpdatesBeforeArrest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder* CivilianEvacuateOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAISquad*> SearchSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* SearchOriginRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> CheckedRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZInvestigationData> InvestigationData;
    
public:
    USBZAISearchManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnInvestigationCompleted(USBZAIOrder* Order, APawn* Pawn, TEnumAsByte<EBTNodeResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState NewHeistState);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool Investigate(const UObject* WorldContextObject, const FSBZInvestigationRequest& Request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInvestigationFor(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAISearchManager* Get(const UObject* WorldContextObject);
    
};

