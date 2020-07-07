#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Details_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
struct UUI_Forge_Details_C_StartCounting_Params
{
};

// Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
struct UUI_Forge_Details_C_SetCountProgress_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
struct UUI_Forge_Details_C_OpenMatrixCore_Params
{
};

// Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
struct UUI_Forge_Details_C_SetItemDescription_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
struct UUI_Forge_Details_C_ShowSchematic_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
struct UUI_Forge_Details_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Details.UI_Forge_Details_C.Construct
struct UUI_Forge_Details_C_Construct_Params
{
};

// Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished
struct UUI_Forge_Details_C_AnimOpenMatrixFinished_Params
{
};

// Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting
struct UUI_Forge_Details_C_Stop_Counting_Params
{
};

// Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
struct UUI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature
struct UUI_Forge_Details_C_OnMatrixCoreOpened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
