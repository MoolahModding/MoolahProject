#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZCodeViewerInterface.generated.h"

class UWidgetComponent;

UINTERFACE(Blueprintable)
class USBZCodeViewerInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZCodeViewerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIdentifier(const FText& InIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCodeViewer(const TArray<int32>& GeneratedCodes, const int32 TrueCodeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeWidget(UWidgetComponent* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumberOfCodeWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCode(UWidgetComponent* Widget, int32 CodeToShow);
    
};

