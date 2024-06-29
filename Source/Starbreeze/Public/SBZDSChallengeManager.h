#pragma once
#include "CoreMinimal.h"
#include "UserChallengeRecord.h"
#include "UObject/Object.h"
#include "SBZChallengeData.h"
#include "SBZDSChallengeManager.generated.h"

class USBZDSChallengeManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDSChallengeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUserChallengeRecord> ChallengeRecordCaches;
    
public:
    USBZDSChallengeManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZDSChallengeManager* GetDSChallengeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZChallengeData> GetCompletedChallengesDuringMission() const;
    
};

