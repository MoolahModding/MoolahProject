#include "SBZOnlineMatchmakingParams.h"

FSBZOnlineMatchmakingParams::FSBZOnlineMatchmakingParams() {
    this->bQuickMatch = false;
    this->LevelIdx = 0;
    this->DifficultyIdx = 0;
    this->MatchmakingRandomSeed = 0;
    this->Command = ESBZMatchmakingCommand::RegularMatchmaking;
}

