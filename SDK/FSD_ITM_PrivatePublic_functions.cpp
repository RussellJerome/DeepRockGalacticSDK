// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_PrivatePublic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_PrivatePublic.ITM_PrivatePublic_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PrivatePublic_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PrivatePublic.ITM_PrivatePublic_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	UITM_PrivatePublic_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PrivatePublic.ITM_PrivatePublic_C.UpdateState
// (BlueprintCallable, BlueprintEvent)

void UITM_PrivatePublic_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PrivatePublic.ITM_PrivatePublic_C.UpdateState");

	UITM_PrivatePublic_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PrivatePublic.ITM_PrivatePublic_C.ExecuteUbergraph_ITM_PrivatePublic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PrivatePublic_C::ExecuteUbergraph_ITM_PrivatePublic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PrivatePublic.ITM_PrivatePublic_C.ExecuteUbergraph_ITM_PrivatePublic");

	UITM_PrivatePublic_C_ExecuteUbergraph_ITM_PrivatePublic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
