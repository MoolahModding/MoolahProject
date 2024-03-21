using UnrealBuildTool;

public class SBZWorldRuntime : ModuleRules {
    public SBZWorldRuntime(ReadOnlyTargetRules Target) : base(Target) {
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
            "AnimationCore",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "BinkMediaPlayer",
            "CableComponent",
            "Chaos",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "JsonUtilities",
            "Landscape",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PacketHandler",
            "Paper2D",
            "PhysXVehicles",
            "PhysicsCore",
            "PropertyAccess",
            "PropertyPath",
            "ReplicationGraph",
            "SBZAnalytics",
            "SBZStateMachineBase",
            "SBZUtilityPlugin",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "UMG",
        });
    }
}
