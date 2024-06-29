#pragma once
#include "CoreMinimal.h"
#include "SBZCodeAndIdentifier.h"
#include "SBZKeypadBase.h"
#include "SBZMultiCodeDelegateDelegate.h"
#include "SBZMultiCodeKeypad.generated.h"

UCLASS(Blueprintable)
class ASBZMultiCodeKeypad : public ASBZKeypadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentCodeIndex, meta=(AllowPrivateAccess=true))
    uint8 CurrentCodeIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMultiCodeDelegate OnCorrectCodeEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CodeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCodeAndIdentifier> CodeIdentifierArray;
    
public:
    ASBZMultiCodeKeypad(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCodeIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnCodeIndexChanged(int32 CurrentIndex, const FText& Identifier);
    
};

