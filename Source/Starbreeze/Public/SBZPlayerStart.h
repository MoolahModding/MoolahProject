#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "SBZOnPlayerStartUsedSignatureDelegate.h"
#include "SBZPlayerStart.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerStartUsedSignature OnPlayerStartUsed;
    
    ASBZPlayerStart(const FObjectInitializer& ObjectInitializer);

};

