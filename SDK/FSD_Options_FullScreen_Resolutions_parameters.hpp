#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_FullScreen_Resolutions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
struct UOptions_FullScreen_Resolutions_C_ShouldResolutionBeEnabled_Params
{
	class UFSDGameUserSettings**                       usersettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
struct UOptions_FullScreen_Resolutions_C_StringToRes_Params
{
	class FString*                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FIntPoint                                   IntPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
struct UOptions_FullScreen_Resolutions_C_ResToString_Params
{
	struct FIntPoint                                   IntPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
struct UOptions_FullScreen_Resolutions_C_Construct_Params
{
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
struct UOptions_FullScreen_Resolutions_C_UINeedsUpdate_Params
{
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
struct UOptions_FullScreen_Resolutions_C_ShowUI_Params
{
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
struct UOptions_FullScreen_Resolutions_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
struct UOptions_FullScreen_Resolutions_C_ExecuteUbergraph_Options_FullScreen_Resolutions_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
