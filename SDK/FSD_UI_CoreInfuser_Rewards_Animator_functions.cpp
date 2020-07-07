// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Animator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.ShowAsReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Animator_C::ShowAsReward(bool* IsReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.ShowAsReward");

	UUI_CoreInfuser_Rewards_Animator_C_ShowAsReward_Params params;
	params.IsReward = IsReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.GetIsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Animator_C::GetIsOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.GetIsOpen");

	UUI_CoreInfuser_Rewards_Animator_C_GetIsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InIsOpen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Animator_C::SetOpen(bool* InIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.SetOpen");

	UUI_CoreInfuser_Rewards_Animator_C_SetOpen_Params params;
	params.InIsOpen = InIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.OnOpenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Animator_C::OnOpenChanged__DelegateSignature(bool* Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.OnOpenChanged__DelegateSignature");

	UUI_CoreInfuser_Rewards_Animator_C_OnOpenChanged__DelegateSignature_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
