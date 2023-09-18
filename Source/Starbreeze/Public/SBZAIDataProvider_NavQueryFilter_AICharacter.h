#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "SBZAIDataProvider_NavQueryFilter_AICharacter.generated.h"

class UClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_NavQueryFilter_AICharacter : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NQFClass;
    
    USBZAIDataProvider_NavQueryFilter_AICharacter();

};

