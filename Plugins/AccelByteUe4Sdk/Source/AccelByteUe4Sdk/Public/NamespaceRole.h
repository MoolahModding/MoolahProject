#pragma once
#include "CoreMinimal.h"
#include "NamespaceRole.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FNamespaceRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoleId;
    
    FNamespaceRole();
};

