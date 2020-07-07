#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_LevelIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
struct UUI_Forge_LevelIcon_C_GetLevel_Params
{
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
struct UUI_Forge_LevelIcon_C_SetLevelFromSchematic_Params
{
	class USchematic**                                 Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
struct UUI_Forge_LevelIcon_C_SetLevel_Params
{
	int*                                               InLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
struct UUI_Forge_LevelIcon_C_SetIconColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
struct UUI_Forge_LevelIcon_C_SetSize_Params
{
	float*                                             InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
struct UUI_Forge_LevelIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
struct UUI_Forge_LevelIcon_C_ExecuteUbergraph_UI_Forge_LevelIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
