#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "Engine/TriggerVolume.h"
#include "ESBZRoomLabel.h"
#include "ESBZRoomType.h"
#include "SBZCoverPointContainerInterface.h"
#include "SBZRoomVolume.generated.h"

class AActor;
class ASBZCoverPoint;
class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;
class USBZAIObjectiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASBZRoomVolume : public ATriggerVolume, public INavRelevantInterface, public ISBZCoverPointContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRoomType RoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISBZRoomConnectorInterface>> RoomConnections;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRoomLabel Label;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCoverPoint*> CoverPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCoverPoint*> SearchableCovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsInRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIObjectiveComponent*> AIObjectivesInRoom;
    
public:
    ASBZRoomVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRoomType(ESBZRoomType InRoomType);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomName(const FText& InRoomName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZRoomType GetRoomType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRoomName() const;
    

    // Fix for true pure virtual functions not being implemented
};

