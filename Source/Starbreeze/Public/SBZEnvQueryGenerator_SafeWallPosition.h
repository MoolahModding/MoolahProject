#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "SBZAIDataProvider_NavQueryFilter.h"
#include "SBZEnvQueryGenerator_SafeWallPosition.generated.h"

class UClass;

UCLASS(Blueprintable, EditInlineNew)
class USBZEnvQueryGenerator_SafeWallPosition : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SearchCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EnemyContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue WallToEnemyMinDot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue PointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIDataProvider_NavQueryFilter NavFilterProvider;
    
public:
    USBZEnvQueryGenerator_SafeWallPosition();

};

