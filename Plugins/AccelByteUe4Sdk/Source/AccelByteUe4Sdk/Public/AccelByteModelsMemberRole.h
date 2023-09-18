#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRolePermission.h"
#include "AccelByteModelsMemberRole.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMemberRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberRoleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberRoleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMemberRolePermission> MemberRolePermissions;
    
    FAccelByteModelsMemberRole();
};

