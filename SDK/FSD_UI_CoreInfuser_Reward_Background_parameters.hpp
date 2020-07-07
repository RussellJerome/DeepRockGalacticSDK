#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Reward_Background_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetCategory
struct UUI_CoreInfuser_Reward_Background_C_SetCategory_Params
{
	class USchematicCategory**                         InSchematicCategory;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetSize
struct UUI_CoreInfuser_Reward_Background_C_SetSize_Params
{
	float*                                             InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetHovered
struct UUI_CoreInfuser_Reward_Background_C_SetHovered_Params
{
	bool*                                              InHovering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetAngled
struct UUI_CoreInfuser_Reward_Background_C_SetAngled_Params
{
	bool*                                              Angled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.PreConstruct
struct UUI_CoreInfuser_Reward_Background_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Background
struct UUI_CoreInfuser_Reward_Background_C_ExecuteUbergraph_UI_CoreInfuser_Reward_Background_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
