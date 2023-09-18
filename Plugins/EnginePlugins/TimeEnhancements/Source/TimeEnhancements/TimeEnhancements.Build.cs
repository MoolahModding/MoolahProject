/* Copyright (C) 2019 Pedro Montoto García - All Rights Reserved
 * 
 * You may use, distribute and modify this code under the
 * terms of the Apache License version 2.0.
 */

using UnrealBuildTool;

/**
 * Build rules for the TimeEnhancements module
 */
public class TimeEnhancements : ModuleRules
{
	/**
	 * Minimal dependencies (none added from default, removed Slate-related)
	 */
	public TimeEnhancements(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
		new string[]
		{
			"Core",
		}
		);


		PrivateDependencyModuleNames.AddRange(
		new string[]
		{
			"CoreUObject",
			"Engine",
        }
		);
	}
}
