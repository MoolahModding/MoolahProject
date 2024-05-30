#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBZFireTokenType.h"
#include "SBZBTDecorator_FirePermissionGuard.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SBZBTDecorator_FirePermissionGuard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearAllTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFireTokenType TokenType;
    
    UDEPRECATED_SBZBTDecorator_FirePermissionGuard();

};

