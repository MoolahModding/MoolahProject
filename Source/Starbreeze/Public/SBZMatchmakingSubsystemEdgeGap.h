#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SBZMatchmakingSubsystemEdgeGap.generated.h"

UCLASS(Blueprintable, Config=Starbreeze)
class STARBREEZE_API USBZMatchmakingSubsystemEdgeGap : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInQueue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakerURL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakerAPIToken;
    
    USBZMatchmakingSubsystemEdgeGap();

    UFUNCTION(BlueprintCallable)
    bool StartMatchmaking(const FString& Map, const FString& DifficultyIdx);
    
    UFUNCTION(BlueprintCallable)
    bool CancelMatchmaking();
    
};

