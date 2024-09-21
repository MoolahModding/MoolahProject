#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "SBZAIDataProvider_PrimaryIsEquipped.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_PrimaryIsEquipped : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoolValue;
    
    USBZAIDataProvider_PrimaryIsEquipped();

};

