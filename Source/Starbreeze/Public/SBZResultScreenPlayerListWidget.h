#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZResultScreenPlayerListWidget.generated.h"

class ASBZAICrewState;
class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZResultScreenPlayerListWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZResultScreenPlayerListWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(const TArray<ASBZPlayerState*>& PlayerStateArray, const TArray<ASBZAICrewState*>& AICrewStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSanitizeDisplayNamesComplete(const TMap<int32, FString>& PlayerIdToAccelByteDisplayNameMap);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMergePartyUpdated(const FString& PlayerDisplayName, const bool bIsMergePartySelected);
    
};

