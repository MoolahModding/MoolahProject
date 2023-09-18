using UnrealBuildTool;

public class PAYDAY3Target : TargetRules {
	public PAYDAY3Target(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"PAYDAY3",
            "SBZWorldRuntime",
			"Starbreeze",
		});
	}
}
