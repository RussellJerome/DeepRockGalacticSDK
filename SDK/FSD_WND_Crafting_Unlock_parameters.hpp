#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Crafting_Unlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
struct UWND_Crafting_Unlock_C_CreateResources_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
struct UWND_Crafting_Unlock_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
struct UWND_Crafting_Unlock_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWND_Crafting_Unlock_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_Crafting_Unlock_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
struct UWND_Crafting_Unlock_C_Close_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
struct UWND_Crafting_Unlock_C_Cancel_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select
struct UWND_Crafting_Unlock_C_Select_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu
struct UWND_Crafting_Unlock_C_DoEquipMenu_Params
{
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
struct UWND_Crafting_Unlock_C_Show_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
struct UWND_Crafting_Unlock_C_ExecuteUbergraph_WND_Crafting_Unlock_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
