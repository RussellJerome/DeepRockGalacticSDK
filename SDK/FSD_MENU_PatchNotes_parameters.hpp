#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_PatchNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_PatchNotes.MENU_PatchNotes_C.OnClosed
struct UMENU_PatchNotes_C_OnClosed_Params
{
};

// Function MENU_PatchNotes.MENU_PatchNotes_C.OnShown
struct UMENU_PatchNotes_C_OnShown_Params
{
};

// Function MENU_PatchNotes.MENU_PatchNotes_C.EnableMod
struct UMENU_PatchNotes_C_EnableMod_Params
{
	class UClass**                                     ModActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_PatchNotes.MENU_PatchNotes_C.Construct
struct UMENU_PatchNotes_C_Construct_Params
{
};

// Function MENU_PatchNotes.MENU_PatchNotes_C.ExecuteUbergraph_MENU_PatchNotes
struct UMENU_PatchNotes_C_ExecuteUbergraph_MENU_PatchNotes_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
