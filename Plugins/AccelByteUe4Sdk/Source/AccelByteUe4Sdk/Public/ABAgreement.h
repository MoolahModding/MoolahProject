#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ArrayModelsAcceptAgreementRequest.h"
#include "DArrayModelsPublicPolicyResponseDelegate.h"
#include "DArrayModelsRetrieveUserEligibilitiesResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsAcceptAgreementResponseDelegate.h"
#include "DStringDelegate.h"
#include "EAccelByteAgreementPolicyType.h"
#include "ABAgreement.generated.h"

UCLASS(Blueprintable)
class UABAgreement : public UObject {
    GENERATED_BODY()
public:
    UABAgreement();
    UFUNCTION(BlueprintCallable)
    void QueryLegalEligibilities(const FString& Namespace, const FDArrayModelsRetrieveUserEligibilitiesResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalPoliciesByTags(const EAccelByteAgreementPolicyType& AgreementPolicyType, const TArray<FString>& tags, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalPoliciesByNamespace(const FString& Namesapce, const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalPoliciesByCountryAndTags(const FString& CountryCode, const EAccelByteAgreementPolicyType& AgreementPolicyType, const TArray<FString>& Tags, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalPoliciesByCountry(const FString& CountryCode, const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalPolicies(const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLegalDocument(const FString& Url, const FDString& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkAcceptPolicyVersions(const FArrayModelsAcceptAgreementRequest& AgreementRequests, const FDModelsAcceptAgreementResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptPolicyVersion(const FString& LocalizedPolicyVersionId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
};

