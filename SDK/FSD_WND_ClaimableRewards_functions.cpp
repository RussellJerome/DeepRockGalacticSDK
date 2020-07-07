// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_ClaimableRewards_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_ClaimableRewards.WND_ClaimableRewards_C.GetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FClaimableRewardView    OutData                        (Parm, OutParm)

void UWND_ClaimableRewards_C::GetData(struct FClaimableRewardView* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.GetData");

	UWND_ClaimableRewards_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_ClaimableRewards_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnKeyUp");

	UWND_ClaimableRewards_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_ClaimableRewards_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnShown");

	UWND_ClaimableRewards_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature
// (BlueprintEvent)

void UWND_ClaimableRewards_C::BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature");

	UWND_ClaimableRewards_C_BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.DoClose
// (BlueprintCallable, BlueprintEvent)

void UWND_ClaimableRewards_C::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.DoClose");

	UWND_ClaimableRewards_C_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_ClaimableRewards_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWND_ClaimableRewards_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_ClaimableRewards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.PreConstruct");

	UWND_ClaimableRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_ClaimableRewards.WND_ClaimableRewards_C.ExecuteUbergraph_WND_ClaimableRewards
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_ClaimableRewards_C::ExecuteUbergraph_WND_ClaimableRewards(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_ClaimableRewards.WND_ClaimableRewards_C.ExecuteUbergraph_WND_ClaimableRewards");

	UWND_ClaimableRewards_C_ExecuteUbergraph_WND_ClaimableRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
