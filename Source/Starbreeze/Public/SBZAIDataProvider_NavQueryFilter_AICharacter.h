#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "Templates/SubclassOf.h"
#include "SBZAIDataProvider_NavQueryFilter_AICharacter.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_NavQueryFilter_AICharacter : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NQFClass;
    
    USBZAIDataProvider_NavQueryFilter_AICharacter();

};

