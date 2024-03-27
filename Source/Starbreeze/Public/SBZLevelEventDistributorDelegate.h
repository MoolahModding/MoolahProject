#pragma once
#include "CoreMinimal.h"
#include "SBZLevelEventDistributorDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZLevelEventDistributor, const TArray<int32>&, CompletedIndexes);

