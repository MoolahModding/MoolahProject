#pragma once
#include "CoreMinimal.h"
#include "ESBZSecurityCompany.h"
#include "SBZOnSecurityCompaniesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSecurityCompaniesChanged, const TArray<ESBZSecurityCompany>&, SecurityCompanies);

