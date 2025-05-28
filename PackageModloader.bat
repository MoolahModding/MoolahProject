@echo off

RMDIR /S "./StagingTemp/PAYDAY3"

xcopy "./Saved/Cooked/WindowsNoEditor/PAYDAY3/Content/Mods/ModLoader" "./StagingTemp/PAYDAY3/Content/Mods/ModLoader" /I /E
xcopy "./Saved/Cooked/WindowsNoEditor/PAYDAY3/Content/Gameplay/GameInstance" "./StagingTemp/PAYDAY3/Content/Gameplay/GameInstance" /I /E

repak pack StagingTemp zModLoader_P.pak