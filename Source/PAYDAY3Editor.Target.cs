using UnrealBuildTool;

public class PAYDAY3EditorTarget : TargetRules {
	public PAYDAY3EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SBZWorldRuntime",
			"Starbreeze",
		});
	}
}
