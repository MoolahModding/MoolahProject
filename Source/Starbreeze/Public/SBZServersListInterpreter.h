#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PaginatedGameSessionQueryResult.h"
#include "UObject/Interface.h"
#include "ESBZDifficulty.h"
#include "ESBZOnlineTacticType.h"
#include "ESBZServerBrowserSessionsType.h"
#include "SBZServerBrowserFilters.h"
#include "SBZServersListInterpreter.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class USBZServersListInterpreter : public UInterface {
    GENERATED_BODY()
};

class ISBZServersListInterpreter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAutoUpdateEnabled(const UObject* Context, bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestUpdateServersCollectionWithFilters(const UObject* Context, const FSBZServerBrowserFilters& InFilters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestUpdateServersCollection(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_SelectSessionType(TEnumAsByte<ESBZServerBrowserSessionsType>& InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_Previous();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_Next();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_IsFriendsServerListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_IsBegin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_IsAPIServerListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_HasPrevious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_HasNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Iterator_HasBegin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_Friends_Begin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_Begin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Iterator_API_Begin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsServerListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAutoUpdateEnabled(const UObject* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitServerListInterpreter(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(FAccelByteModelsV2PaginatedGameSessionQueryResult& InServersCollection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESBZOnlineTacticType GetTactic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetServersCollectionSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPeopleAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetLobbyCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetHeistOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetHeistName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESBZDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesGameVersionMatchBuild(const UObject* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRequestNewUpdate(const UObject* Context) const;
    
};

