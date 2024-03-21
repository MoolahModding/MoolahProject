#include "SBZReplicationGraph.h"

void USBZReplicationGraph::OnActorDependencyRemoved(AActor* Master, AActor* Slave) {
}

void USBZReplicationGraph::OnActorDependencyAdded(AActor* Master, AActor* Slave) {
}

USBZReplicationGraph::USBZReplicationGraph() {
    this->GridNode = NULL;
    this->PrototypeNode = NULL;
    this->AlwaysRelevantNode = NULL;
    this->DynamicSpatialFrequencyNode = NULL;
    this->IntialFrameReplicationNode = NULL;
    this->ConfigRepClasses.AddDefaulted(84);
}

