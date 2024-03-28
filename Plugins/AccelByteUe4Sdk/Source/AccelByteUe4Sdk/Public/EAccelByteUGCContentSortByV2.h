#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUGCContentSortByV2.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUGCContentSortByV2 : uint8 {
    NAME,
    NAME_ASC,
    NAME_DESC,
    DOWNLOAD,
    DOWNLOAD_ASC,
    DOWNLOAD_DESC,
    LIKE,
    LIKE_ASC,
    LIKE_DESC,
    CREATED_TIME,
    CREATED_TIME_ASC,
    CREATED_TIME_DESC,
};

