#include "IpNetDriverAccelByte.h"

UIpNetDriverAccelByte::UIpNetDriverAccelByte() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("AccelByteNetworkUtilities.IpConnectionAccelByte");
    this->ReplicationDriverClassName = TEXT("/Script/Starbreeze.SBZReplicationGraph");
    this->ChannelDefinitions.AddDefaulted(3);
}


