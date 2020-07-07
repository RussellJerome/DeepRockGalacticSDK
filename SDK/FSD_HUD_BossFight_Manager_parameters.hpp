#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BossFight_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight
struct UHUD_BossFight_Manager_C_AddBossFight_Params
{
	struct FBossFight*                                 BossFight;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9
struct UHUD_BossFight_Manager_C_OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct
struct UHUD_BossFight_Manager_C_Construct_Params
{
};

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight
struct UHUD_BossFight_Manager_C_OnNewBossFight_Params
{
	struct FBossFight*                                 BossFight;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct
struct UHUD_BossFight_Manager_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager
struct UHUD_BossFight_Manager_C_ExecuteUbergraph_HUD_BossFight_Manager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
