#include "HoudiniGenericAttribute.h"

FHoudiniGenericAttribute::FHoudiniGenericAttribute() {
    this->AttributeType = EAttribStorageType::INT;
    this->AttributeOwner = EAttribOwner::Vertex;
    this->AttributeCount = 0;
    this->AttributeTupleSize = 0;
}

