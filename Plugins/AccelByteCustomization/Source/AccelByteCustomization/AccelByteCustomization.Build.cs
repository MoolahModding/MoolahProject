using UnrealBuildTool;

public class AccelByteCustomization : ModuleRules {
    public AccelByteCustomization(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AccelByteUe4Sdk",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
