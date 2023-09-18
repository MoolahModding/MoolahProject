#include "HoudiniPDGAssetLink.h"

UHoudiniPDGAssetLink::UHoudiniPDGAssetLink() {
    this->AssetID = -1;
    this->SelectedTOPNetworkIndex = -1;
    this->LinkState = EPDGLinkState::Inactive;
    this->bAutoCook = false;
    this->bUseTOPNodeFilter = true;
    this->bUseTOPOutputFilter = true;
    this->TOPNodeFilter = TEXT("HE_");
    this->TOPOutputFilter = TEXT("HE_OUT_");
    this->NumWorkitems = 0;
    this->bNeedsUIRefresh = false;
    this->OutputParentActor = NULL;
}


