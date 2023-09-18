#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputDataTable.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputDataTable : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UHoudiniInputDataTable();

};

