#include "IpNetDriverAccelByte.h"

UIpNetDriverAccelByte::UIpNetDriverAccelByte() {
    this->NetConnectionClassName = TEXT("AccelByteNetworkUtilities.IpConnectionAccelByte");
    this->ReplicationDriverClassName = TEXT("/Script/Starbreeze.SBZReplicationGraph");
    this->ChannelDefinitions.AddDefaulted(3);
}


