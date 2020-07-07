// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UnlockedCelebration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_UnlockedCelebration_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp");

	UITM_UnlockedCelebration_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_UnlockedCelebration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct");

	UITM_UnlockedCelebration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_UnlockedCelebration_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_UnlockedCelebration_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue
// (BlueprintCallable, BlueprintEvent)

void UITM_UnlockedCelebration_C::ClickContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue");

	UITM_UnlockedCelebration_C_ClickContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasteryItem*           Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UnlockedCelebration_C::ShowRewards(struct FMasteryItem* Rewards, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards");

	UITM_UnlockedCelebration_C_ShowRewards_Params params;
	params.Rewards = Rewards;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UnlockedCelebration_C::ExecuteUbergraph_ITM_UnlockedCelebration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration");

	UITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUnlockReward*>   Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_UnlockedCelebration_C::OnFinished__DelegateSignature(TArray<class UUnlockReward*>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature");

	UITM_UnlockedCelebration_C_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
