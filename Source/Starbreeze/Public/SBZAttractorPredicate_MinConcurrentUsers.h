#pragma once
#include "CoreMinimal.h"
#include "SBZAttractorPredicate.h"
#include "SBZAttractorPredicate_MinConcurrentUsers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate_MinConcurrentUsers : public USBZAttractorPredicate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinConcurentUsers;
    
    USBZAttractorPredicate_MinConcurrentUsers();

};

