using UnrealBuildTool;

public class PAYDAY3 : ModuleRules {
    public PAYDAY3(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AccelByteUe4Sdk",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "AnimationCore",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
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
            "Starbreeze",
            "SBZWorldRuntime",
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
