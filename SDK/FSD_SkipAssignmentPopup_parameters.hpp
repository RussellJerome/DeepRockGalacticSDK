#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SkipAssignmentPopup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnKeyUp
struct USkipAssignmentPopup_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnShow
struct USkipAssignmentPopup_C_OnShow_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct USkipAssignmentPopup_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct USkipAssignmentPopup_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.PreConstruct
struct USkipAssignmentPopup_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.Yes
struct USkipAssignmentPopup_C_Yes_Params
{
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.No
struct USkipAssignmentPopup_C_No_Params
{
};

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.ExecuteUbergraph_SkipAssignmentPopup
struct USkipAssignmentPopup_C_ExecuteUbergraph_SkipAssignmentPopup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
