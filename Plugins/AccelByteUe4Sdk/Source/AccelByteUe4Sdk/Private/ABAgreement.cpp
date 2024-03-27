#include "ABAgreement.h"

void UABAgreement::QueryLegalEligibilities(const FString& Namespace, const FDArrayModelsRetrieveUserEligibilitiesResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalPoliciesByTags(const EAccelByteAgreementPolicyType& AgreementPolicyType, const TArray<FString>& tags, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalPoliciesByNamespace(const FString& Namesapce, const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalPoliciesByCountryAndTags(const FString& CountryCode, const EAccelByteAgreementPolicyType& AgreementPolicyType, const TArray<FString>& Tags, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalPoliciesByCountry(const FString& CountryCode, const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalPolicies(const EAccelByteAgreementPolicyType& AgreementPolicyType, bool DefaultOnEmpty, const FDArrayModelsPublicPolicyResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::GetLegalDocument(const FString& Url, const FDString& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::BulkAcceptPolicyVersions(const FArrayModelsAcceptAgreementRequest& AgreementRequests, const FDModelsAcceptAgreementResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABAgreement::AcceptPolicyVersion(const FString& LocalizedPolicyVersionId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

UABAgreement::UABAgreement() {
}

