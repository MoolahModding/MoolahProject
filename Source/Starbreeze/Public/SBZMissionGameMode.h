#pragma once
#include "CoreMinimal.h"
#include "SBZGameMode.h"
#include "SBZReconnectPlayerStateData.h"
#include "SBZMissionGameMode.generated.h"

class ASBZAIVisibilityManager;
class UDEPRECATED_SBZFirePermissionManager;
class USBZCoverPointManager;
class USBZSpawnManager;

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZMissionGameMode : public ASBZGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAIVisibilityManager* AIVisibilityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCoverPointManager* CoverPointManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDEPRECATED_SBZFirePermissionManager* FirePermissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZReconnectPlayerStateData> ReconnectPlayerStateDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInactivePlayers;
    
public:
    ASBZMissionGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseExited();
    
};

