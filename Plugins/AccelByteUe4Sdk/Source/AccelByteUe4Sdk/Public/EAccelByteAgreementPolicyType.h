#pragma once
#include "CoreMinimal.h"
#include "EAccelByteAgreementPolicyType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteAgreementPolicyType : uint8 {
    EMPTY,
    LEGAL_DOCUMENT_TYPE,
    MARKETING_PREFERENCE_TYPE,
};

