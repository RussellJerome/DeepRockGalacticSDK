#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WarningAndMutator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetMutatorInfo
struct UITM_WarningAndMutator_C_SetMutatorInfo_Params
{
	class UMissionMutator**                            Mutator;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetWarningInfo
struct UITM_WarningAndMutator_C_SetWarningInfo_Params
{
	class UMissionWarning**                            Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.PreConstruct
struct UITM_WarningAndMutator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update
struct UITM_WarningAndMutator_C_Update_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_WarningAndMutator_C_BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UITM_WarningAndMutator_C_BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator
struct UITM_WarningAndMutator_C_ExecuteUbergraph_ITM_WarningAndMutator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature
struct UITM_WarningAndMutator_C_MutatorClicked__DelegateSignature_Params
{
};

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature
struct UITM_WarningAndMutator_C_WarningClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
