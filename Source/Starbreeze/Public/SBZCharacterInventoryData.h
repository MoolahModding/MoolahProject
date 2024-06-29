#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterLockReason.h"
#include "SBZCharacterInventoryData.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct FSBZCharacterInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterLockReason CharacterLockReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    STARBREEZE_API FSBZCharacterInventoryData();
};

