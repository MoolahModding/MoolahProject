#pragma once
#include "CoreMinimal.h"
#include "ESBZPredicateQueryTarget.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_RoomType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_RoomType : public USBZReactionPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPredicateQueryTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedRooms;
    
public:
    USBZReactionPredicate_RoomType();

};

