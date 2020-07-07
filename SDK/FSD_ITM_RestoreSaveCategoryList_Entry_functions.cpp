// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RestoreSaveCategoryList_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_RestoreSaveCategoryList_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.Construct");

	UITM_RestoreSaveCategoryList_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSaveCategoryList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UITM_RestoreSaveCategoryList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSaveCategoryList_Entry_C::ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry");

	UITM_RestoreSaveCategoryList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
