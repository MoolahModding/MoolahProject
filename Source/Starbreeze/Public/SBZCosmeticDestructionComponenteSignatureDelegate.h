#pragma once
#include "CoreMinimal.h"
#include "ESBZCosmeticDestructionType.h"
#include "SBZCosmeticDestructionContext.h"
#include "SBZCosmeticDestructionComponenteSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZCosmeticDestructionComponenteSignature, ESBZCosmeticDestructionType, Type, const FSBZCosmeticDestructionContext&, HitContext);

