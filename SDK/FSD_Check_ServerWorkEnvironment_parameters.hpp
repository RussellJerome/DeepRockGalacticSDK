#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Check_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
struct UCheck_ServerWorkEnvironment_C_SetIsChecked_Params
{
	bool*                                              InIsChecked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
struct UCheck_ServerWorkEnvironment_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
struct UCheck_ServerWorkEnvironment_C_GetIsChecked_Params
{
	bool                                               Checked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
struct UCheck_ServerWorkEnvironment_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UCheck_ServerWorkEnvironment_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UCheck_ServerWorkEnvironment_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
struct UCheck_ServerWorkEnvironment_C_Construct_Params
{
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
struct UCheck_ServerWorkEnvironment_C_ExecuteUbergraph_Check_ServerWorkEnvironment_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
struct UCheck_ServerWorkEnvironment_C_OnCheckedChanged__DelegateSignature_Params
{
	class UCheck_ServerWorkEnvironment_C**             CheckBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDifficultySetting**                         Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
