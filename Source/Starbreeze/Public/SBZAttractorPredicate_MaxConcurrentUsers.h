#pragma once
#include "CoreMinimal.h"
#include "SBZAttractorPredicate.h"
#include "SBZAttractorPredicate_MaxConcurrentUsers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate_MaxConcurrentUsers : public USBZAttractorPredicate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConcurentUsers;
    
    USBZAttractorPredicate_MaxConcurrentUsers();
};

