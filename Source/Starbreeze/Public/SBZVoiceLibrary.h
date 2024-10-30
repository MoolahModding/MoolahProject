#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPOnDialogEnded_DelegateDelegate.h"
#include "ESBZPlayDialogResult.h"
#include "SBZVoiceLibrary.generated.h"

class AActor;
class UObject;
class USBZDialogDataAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZVoiceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZVoiceLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SayCommentWithClosestHeisterToLocation(UObject* WorldContextObject, const USBZVoiceCommentDataAsset* CommmentAsset, const FVector& Location, bool bIncludePlayers, bool bIncludeCrewAI, float WithinDistance, bool bIsServerInstigated);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SayCommentWithClosestHeisterToActor(UObject* WorldContextObject, const USBZVoiceCommentDataAsset* CommmentAsset, AActor* Actor, bool bIncludePlayers, bool bIncludeCrewAI, float WithinDistance, bool bIsServerInstigated);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialogWithSuitablePlayers(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const FBPOnDialogEnded_Delegate& OnDialogEnded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialogLocally(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator, bool bCanBeQueued);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialog(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator, bool bCanBeQueued);
    
};

