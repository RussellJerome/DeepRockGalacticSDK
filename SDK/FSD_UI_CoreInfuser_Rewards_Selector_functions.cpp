// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Selector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InIsOpen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::SetOpen(bool* InIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetOpen");

	UUI_CoreInfuser_Rewards_Selector_C_SetOpen_Params params;
	params.InIsOpen = InIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSelectedReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRewardValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::SetSelectedReward(class USchematic** InReward, bool* IsRewardValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSelectedReward");

	UUI_CoreInfuser_Rewards_Selector_C_SetSelectedReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRewardValid != nullptr)
		*IsRewardValid = params.IsRewardValid;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSchematicRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USchematic*>      InRewards                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_CoreInfuser_Rewards_Selector_C::SetSchematicRewards(TArray<class USchematic*>* InRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSchematicRewards");

	UUI_CoreInfuser_Rewards_Selector_C_SetSchematicRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewards != nullptr)
		*InRewards = params.InRewards;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CoreInfuser_Rewards_Selector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.Construct");

	UUI_CoreInfuser_Rewards_Selector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::RewardHovered(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardHovered");

	UUI_CoreInfuser_Rewards_Selector_C_RewardHovered_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::RewardUnhovered(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardUnhovered");

	UUI_CoreInfuser_Rewards_Selector_C_RewardUnhovered_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::RewardSelected(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardSelected");

	UUI_CoreInfuser_Rewards_Selector_C_RewardSelected_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetDispenser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventRewardDispenser**  InDispenser                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::SetDispenser(class AEventRewardDispenser** InDispenser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetDispenser");

	UUI_CoreInfuser_Rewards_Selector_C_SetDispenser_Params params;
	params.InDispenser = InDispenser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector");

	UUI_CoreInfuser_Rewards_Selector_C_ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardsChanged__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USchematic*>      Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_CoreInfuser_Rewards_Selector_C::OnRewardsChanged__DelegateSignature(TArray<class USchematic*>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardsChanged__DelegateSignature");

	UUI_CoreInfuser_Rewards_Selector_C_OnRewardsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnOpenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::OnOpenChanged__DelegateSignature(bool* Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnOpenChanged__DelegateSignature");

	UUI_CoreInfuser_Rewards_Selector_C_OnOpenChanged__DelegateSignature_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::OnRewardSelected__DelegateSignature(class USchematic** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature");

	UUI_CoreInfuser_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::OnRewardUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardUnhovered__DelegateSignature");

	UUI_CoreInfuser_Rewards_Selector_C_OnRewardUnhovered__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Selector_C::OnRewardHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardHovered__DelegateSignature");

	UUI_CoreInfuser_Rewards_Selector_C_OnRewardHovered__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
