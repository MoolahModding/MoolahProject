#include "SkeletalMeshMergeParams.h"

FSkeletalMeshMergeParams::FSkeletalMeshMergeParams() {
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bSkeletonBefore = false;
    this->Skeleton = NULL;
}

