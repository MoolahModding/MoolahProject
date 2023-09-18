#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPOnDialogEnded_DelegateDelegate.h"
#include "ESBZPlayDialogResult.h"
#include "SBZVoiceLibrary.generated.h"

class AActor;
class UObject;
class USBZDialogDataAsset;

UCLASS(Blueprintable)
class USBZVoiceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZVoiceLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialogWithSuitablePlayers(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const FBPOnDialogEnded_Delegate& OnDialogEnded);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialog(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator);
    
};

