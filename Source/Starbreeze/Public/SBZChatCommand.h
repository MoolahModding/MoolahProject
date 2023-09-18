#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESBZChatCommandTypes.h"
#include "SBZChatCommand.generated.h"

USTRUCT(BlueprintType)
struct FSBZChatCommand : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommandAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatCommandTypes CommandToExecute;
    
    STARBREEZE_API FSBZChatCommand();
};

