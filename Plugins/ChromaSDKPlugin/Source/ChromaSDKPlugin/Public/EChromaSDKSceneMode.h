#pragma once
#include "CoreMinimal.h"
#include "EChromaSDKSceneMode.generated.h"

UENUM(BlueprintType)
namespace EChromaSDKSceneMode {
    enum Type {
        SM_Replace,
        SM_Max UMETA(Hidden),
        SM_Min,
        SM_Average,
        SM_Multiply,
        SM_Add,
        SM_Subtract,
    };
}

