#pragma once
#include "CoreMinimal.h"
#include "SingleUserStatRequests.h"
#include "MultipleUsersStatRequests.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FMultipleUsersStatRequests {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSingleUserStatRequests> UsersStatRequests;
    
    FMultipleUsersStatRequests();
};

