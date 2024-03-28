#pragma once
#include "CoreMinimal.h"
#include "ESBZRoomType.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_Room.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_Room : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRoomType RoomType;
    
public:
    USBZAIUtilityScorer_Room();
};

