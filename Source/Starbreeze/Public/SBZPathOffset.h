#pragma once
#include "CoreMinimal.h"
#include "SBZPathOffset.generated.h"

// Custom Engine-side class.
USTRUCT(BlueprintType)
struct FSBZPathOffset {
  GENERATED_BODY()
public:
  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess = true))
  float Offset;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess = true))
  float RandomDeviation;
};