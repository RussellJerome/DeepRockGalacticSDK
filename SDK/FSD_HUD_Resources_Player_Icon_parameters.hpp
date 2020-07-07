#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Player_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged
struct UHUD_Resources_Player_Icon_C_UpdateIfChanged_Params
{
	bool*                                              Changed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount
struct UHUD_Resources_Player_Icon_C_SetAmount_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValueChanged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh
struct UHUD_Resources_Player_Icon_C_Refresh_Params
{
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource
struct UHUD_Resources_Player_Icon_C_SetResource_Params
{
	class UCappedResource**                            InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HideIfEmpty;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource
struct UHUD_Resources_Player_Icon_C_Init_Resource_Params
{
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased
struct UHUD_Resources_Player_Icon_C_OnIncreased_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged
struct UHUD_Resources_Player_Icon_C_OnChanged_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick
struct UHUD_Resources_Player_Icon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct
struct UHUD_Resources_Player_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Construct
struct UHUD_Resources_Player_Icon_C_Construct_Params
{
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnOutroFinished
struct UHUD_Resources_Player_Icon_C_OnOutroFinished_Params
{
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon
struct UHUD_Resources_Player_Icon_C_ExecuteUbergraph_HUD_Resources_Player_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnResourceChanged__DelegateSignature
struct UHUD_Resources_Player_Icon_C_OnResourceChanged__DelegateSignature_Params
{
	class UHUD_Resources_Player_Icon_C**               ResourceIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
