// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Jobs_Entry_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold");

	UWND_Jobs_Entry_Base_C_Fold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Jobs_Entry_Base_C::SetData(class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData");

	UWND_Jobs_Entry_Base_C_SetData_Params params;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh");

	UWND_Jobs_Entry_Base_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold
// (BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Unfold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold");

	UWND_Jobs_Entry_Base_C_Unfold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Jobs_Entry_Base_C::ExecuteUbergraph_WND_Jobs_Entry_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base");

	UWND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Updated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature");

	UWND_Jobs_Entry_Base_C_Updated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C** entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Jobs_Entry_Base_C::Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C** entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature");

	UWND_Jobs_Entry_Base_C_Unfolded__DelegateSignature_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
