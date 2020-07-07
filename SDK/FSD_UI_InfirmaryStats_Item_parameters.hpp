#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_InfirmaryStats_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
struct UUI_InfirmaryStats_Item_C_OwnedByLocal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
struct UUI_InfirmaryStats_Item_C_GetPlayer_Params
{
	class AFSDPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
struct UUI_InfirmaryStats_Item_C_SetCategoryFilter_Params
{
	TArray<class UTexture2D*>                          Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
struct UUI_InfirmaryStats_Item_C_GetMissionStat_Params
{
	class UMissionStat*                                Mission_Stat;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
struct UUI_InfirmaryStats_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct
struct UUI_InfirmaryStats_Item_C_Construct_Params
{
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
struct UUI_InfirmaryStats_Item_C_Set_Selected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
struct UUI_InfirmaryStats_Item_C_MissonStatUpdate_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
struct UUI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
struct UUI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
struct UUI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
