// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_JoinFailed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JoinFailed_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWND_JoinFailed_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JoinFailed_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct");

	UWND_JoinFailed_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoinFailed.WND_JoinFailed_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_JoinFailed_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.Cancel");

	UWND_JoinFailed_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JoinFailed_C::ExecuteUbergraph_WND_JoinFailed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed");

	UWND_JoinFailed_C_ExecuteUbergraph_WND_JoinFailed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
