#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSession.h"
#include "AccelByteModelsV2PaginatedGameSessionQueryResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SBZServerBrowserFilters.h"
#include "SBZServerBrowserOnServersUpdatedDelegateDelegate.h"
#include "SBZServerBrowserSubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable, Config=Game)
class STARBREEZE_API USBZServerBrowserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZServerBrowserOnServersUpdatedDelegate OnServersUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2PaginatedGameSessionQueryResult CachedServersQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSession> CachedFriendsSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FriendsSessionsToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZServerBrowserFilters Filters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerCacheUpdateTime;
    
public:
    USBZServerBrowserSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetServersPerPageLimit(int32 NewLimit);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateServersCollectionWithFilters(const FSBZServerBrowserFilters& InFilters);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateServersCollection();
    
};

