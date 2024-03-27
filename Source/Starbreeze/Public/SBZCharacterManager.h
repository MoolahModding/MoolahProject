#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZCharacterSlotData.h"
#include "SBZCharacterManager.generated.h"

class USBZCharacterManager;

UCLASS(Blueprintable)
class USBZCharacterManager : public UObject {
    GENERATED_BODY()
public:
    USBZCharacterManager();
    UFUNCTION(BlueprintPure)
    void GetPreferredCharacters(TArray<FSBZCharacterSlotData>& PreferredCharacterIndexArrayOut);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCharacterManager* GetCharacterManager(const UObject* WorldContextObject);
    
};

