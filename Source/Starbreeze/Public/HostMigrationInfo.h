#pragma once
#include "CoreMinimal.h"
#include "MigratableHost.h"
#include "HostMigrationInfo.generated.h"

USTRUCT(BlueprintType)
struct FHostMigrationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMigratableHost> MigratableHosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    STARBREEZE_API FHostMigrationInfo();
};

