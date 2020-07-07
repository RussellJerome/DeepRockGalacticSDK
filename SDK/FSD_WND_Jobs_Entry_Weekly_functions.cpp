// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Jobs_Entry_Weekly_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Updated_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Updated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Updated_Event_1");

	UWND_Jobs_Entry_Weekly_C_Updated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Fold
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Fold");

	UWND_Jobs_Entry_Weekly_C_Fold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::SetData(class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.SetData");

	UWND_Jobs_Entry_Weekly_C_SetData_Params params;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Refresh");

	UWND_Jobs_Entry_Weekly_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.BndEvt__WND_JobsEntry_K2Node_ComponentBoundEvent_0_Unfolded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C** entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::BndEvt__WND_JobsEntry_K2Node_ComponentBoundEvent_0_Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C** entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.BndEvt__WND_JobsEntry_K2Node_ComponentBoundEvent_0_Unfolded__DelegateSignature");

	UWND_Jobs_Entry_Weekly_C_BndEvt__WND_JobsEntry_K2Node_ComponentBoundEvent_0_Unfolded__DelegateSignature_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Construct");

	UWND_Jobs_Entry_Weekly_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.ExecuteUbergraph_WND_Jobs_Entry_Weekly
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::ExecuteUbergraph_WND_Jobs_Entry_Weekly(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.ExecuteUbergraph_WND_Jobs_Entry_Weekly");

	UWND_Jobs_Entry_Weekly_C_ExecuteUbergraph_WND_Jobs_Entry_Weekly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
