#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZEventIndexes.h"
#include "SBZHackableInfoActorCollection.h"
#include "SBZLevelEventDistributorDelegate.h"
#include "SBZRandomLevelEventDistributor.generated.h"

class ASBZHackableInfoActor;

UCLASS(Blueprintable)
class ASBZRandomLevelEventDistributor : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLevelEventDistributor OnIndexesComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CompletedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHackableInfoActor*> HackableInfoActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHackableInfoActorCollection> HackableInfoActorCollectionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ShuffledIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSBZEventIndexes> EventIndexMap;
    
public:
    ASBZRandomLevelEventDistributor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHackComplete(const int32 EventIndex);
    
};

