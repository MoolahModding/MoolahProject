#include "HoudiniOutputObject.h"

FHoudiniOutputObject::FHoudiniOutputObject() {
    this->OutputObject = NULL;
    this->OutputComponent = NULL;
    this->ProxyObject = NULL;
    this->ProxyComponent = NULL;
    this->bProxyIsCurrent = false;
    this->bIsImplicit = false;
}

