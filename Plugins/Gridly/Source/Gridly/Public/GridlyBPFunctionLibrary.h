#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GridlyBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UGridlyBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGridlyBPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateLocalizationPreview(const TArray<FPolyglotTextData>& PolyglotTextDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocalizationPreviewCulture();
    
    UFUNCTION(BlueprintCallable)
    static void EnableLocalizationPreview(const FString& Culture);
    
};

