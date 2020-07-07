// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_PreventDuplicateCharacters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PreventDuplicateCharacters_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	UITM_PreventDuplicateCharacters_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState
// (BlueprintCallable, BlueprintEvent)

void UITM_PreventDuplicateCharacters_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState");

	UITM_PreventDuplicateCharacters_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PreventDuplicateCharacters_C::ExecuteUbergraph_ITM_PreventDuplicateCharacters(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters");

	UITM_PreventDuplicateCharacters_C_ExecuteUbergraph_ITM_PreventDuplicateCharacters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
