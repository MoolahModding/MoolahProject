#include "SBZDisplayCaseNotCuttable.h"

ASBZDisplayCaseNotCuttable::ASBZDisplayCaseNotCuttable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CuttableVFXComponent = NULL;
    this->CutMesh = NULL;
    this->CutOutlineMesh = NULL;
    this->MeltingMesh = NULL;
    this->BoxComponent = NULL;
    this->CuttableComponent = NULL;
    this->CuttableSplineComponent = NULL;
}


