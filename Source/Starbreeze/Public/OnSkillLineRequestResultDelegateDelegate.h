#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "OnSkillLineRequestResultDelegateDelegate.generated.h"

class USBZSkillLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkillLineRequestResultDelegate, ESBZMetaRequestResult, Result, const USBZSkillLine*, SkillLine);

