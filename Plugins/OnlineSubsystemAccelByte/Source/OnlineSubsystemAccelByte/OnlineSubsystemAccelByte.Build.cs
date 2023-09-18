using UnrealBuildTool;

public class OnlineSubsystemAccelByte : ModuleRules {
    public OnlineSubsystemAccelByte(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "PacketHandler",
        });
    }
}
