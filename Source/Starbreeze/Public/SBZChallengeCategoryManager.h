#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZChallengeData.h"
#include "SBZChallengeCategoryManager.generated.h"

class USBZChallengeCategoryData;
class USBZChallengeCategoryManager;

UCLASS(Blueprintable)
class USBZChallengeCategoryManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZChallengeCategoryData*> ChallengeCategoryData;
    
public:
    USBZChallengeCategoryManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeCategoryManager* GetChallengeCategoryManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeCategoryData* GetChallengeCategoryForTag(const UObject* WorldContextObject, const FString& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChallengeCategoryData* GetChallengeCategoryForChallenge(const UObject* WorldContextObject, const FSBZChallengeData& ChallengeRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetChallengeCategoryData(const UObject* WorldContextObject, TArray<USBZChallengeCategoryData*>& OutCategoryList);
    
};

