#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnSafeHouseLoadCompleteDelegate.h"
#include "OnSafeHouseLoadProgressUpdateDelegate.h"
#include "OnSafeHouseLoadStartDelegate.h"
#include "SBZAsyncLoadLevelInterface.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZSafeHouseManager.generated.h"

class USBZSafeHouseManager;
class USBZWorldLoader;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSafeHouseManager : public UObject, public ISBZAsyncLoadLevelInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWorldLoader* WorldLoader;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeHouseLoadStart OnSafeHouseLoadStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeHouseLoadProgressUpdate OnSafeHouseLoadProgressUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeHouseLoadComplete OnSafeHouseLoadComplete;
    
public:
    USBZSafeHouseManager();

    UFUNCTION(BlueprintCallable)
    void TravelToSafeHouse();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSafeHouseManager* Get(const UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugExitSafeHouse();
    

    // Fix for true pure virtual functions not being implemented
};

