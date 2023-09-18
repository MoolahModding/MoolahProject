using UnrealBuildTool;

public class Starbreeze : ModuleRules {
    public Starbreeze(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AccelByteCustomization",
            "AccelByteUe4Sdk",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "BinkMediaPlayer",
            "CableComponent",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "NavigationSystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "Paper2D",
            "PhysXVehicles",
            "PhysicsCore",
            "ReplicationGraph",
            "SBZAnalytics",
            "SBZStateMachineBase",
            "SBZUtilityPlugin",
            "SBZWorldRuntime",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
