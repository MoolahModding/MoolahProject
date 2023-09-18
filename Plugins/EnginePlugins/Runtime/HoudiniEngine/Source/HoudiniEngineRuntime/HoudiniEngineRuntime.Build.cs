using UnrealBuildTool;

public class HoudiniEngineRuntime : ModuleRules {
    public HoudiniEngineRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Foliage",
            "Landscape",
            "PhysicsCore",
        });
    }
}
