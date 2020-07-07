// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_RestoreSave_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_RestoreSave.Options_RestoreSave_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_RestoreSave_C::BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_RestoreSave.Options_RestoreSave_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");

	UOptions_RestoreSave_C_BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_RestoreSave.Options_RestoreSave_C.ExecuteUbergraph_Options_RestoreSave
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_RestoreSave_C::ExecuteUbergraph_Options_RestoreSave(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_RestoreSave.Options_RestoreSave_C.ExecuteUbergraph_Options_RestoreSave");

	UOptions_RestoreSave_C_ExecuteUbergraph_Options_RestoreSave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
