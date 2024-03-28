#pragma once
#include "CoreMinimal.h"
#include "RegisterResponse.h"
#include "DRegisterResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDRegisterResponse, FRegisterResponse, Response);

