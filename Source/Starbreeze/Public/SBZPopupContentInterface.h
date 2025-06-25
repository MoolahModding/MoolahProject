#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZPopupContentInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZPopupContentInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZPopupContentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopupShown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopupHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionInput(FName InputName);
    
};

