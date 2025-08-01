// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSProjectEditorTarget : TargetRules
{
    public FPSProjectEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
        ExtraModuleNames.Add("FPSProject");
    }
}
