using UnrealBuildTool;

public class AccelByteUe4Sdk : ModuleRules {
    public AccelByteUe4Sdk(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "JsonUtilities",
        });
    }
}
