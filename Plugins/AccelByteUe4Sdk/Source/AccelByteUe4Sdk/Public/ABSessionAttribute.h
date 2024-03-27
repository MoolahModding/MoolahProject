#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DGetAllSessionAttributeResponseDelegate.h"
#include "DGetSessionAttributeResponseDelegate.h"
#include "DSetSessionAttributeResponseDelegate.h"
#include "GetSessionAttributeRequest.h"
#include "SetSessionAttributeRequest.h"
#include "ABSessionAttribute.generated.h"

UCLASS(Blueprintable)
class UABSessionAttribute : public UObject {
    GENERATED_BODY()
public:
    UABSessionAttribute();
    UFUNCTION(BlueprintCallable)
    FString SetSessionAttribute(const FSetSessionAttributeRequest& Request, FDSetSessionAttributeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionAttribute(const FGetSessionAttributeRequest& Request, FDGetSessionAttributeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    FString GetAllSessionAttribute(FDGetAllSessionAttributeResponse OnResponse, FDErrorHandler OnError);
    
};

