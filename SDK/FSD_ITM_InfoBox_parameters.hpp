#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_InfoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_InfoBox.ITM_InfoBox_C.SetOpen
struct UITM_InfoBox_C_SetOpen_Params
{
	bool*                                              IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_InfoBox.ITM_InfoBox_C.SetText
struct UITM_InfoBox_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ENU_TextCase>*                         InText_Case;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_InfoBox.ITM_InfoBox_C.PreConstruct
struct UITM_InfoBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_InfoBox.ITM_InfoBox_C.Construct
struct UITM_InfoBox_C_Construct_Params
{
};

// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_InfoBox.ITM_InfoBox_C.ExecuteUbergraph_ITM_InfoBox
struct UITM_InfoBox_C_ExecuteUbergraph_ITM_InfoBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
