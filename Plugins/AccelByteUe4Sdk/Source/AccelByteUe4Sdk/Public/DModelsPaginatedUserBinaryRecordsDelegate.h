#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedUserBinaryRecords.h"
#include "DModelsPaginatedUserBinaryRecordsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedUserBinaryRecords, FAccelByteModelsPaginatedUserBinaryRecords, Response);

