#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Discord_Popup_YesNoPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp
struct UDiscord_Popup_YesNoPrompt_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow
struct UDiscord_Popup_YesNoPrompt_C_OnShow_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct
struct UDiscord_Popup_YesNoPrompt_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes
struct UDiscord_Popup_YesNoPrompt_C_Yes_Params
{
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No
struct UDiscord_Popup_YesNoPrompt_C_No_Params
{
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources
struct UDiscord_Popup_YesNoPrompt_C_Clear_Resources_Params
{
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource
struct UDiscord_Popup_YesNoPrompt_C_Add_Resource_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources
struct UDiscord_Popup_YesNoPrompt_C_SetResources_Params
{
	TArray<struct FCraftingCost>*                      Resources;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt
struct UDiscord_Popup_YesNoPrompt_C_ExecuteUbergraph_Discord_Popup_YesNoPrompt_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
