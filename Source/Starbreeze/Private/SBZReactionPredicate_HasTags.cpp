#include "SBZReactionPredicate_HasTags.h"

USBZReactionPredicate_HasTags::USBZReactionPredicate_HasTags() {
    this->Target = ESBZPredicateQueryTarget::ListenerActor;
    this->Mode = ESBZTagsQuerySetting::Any;
}


