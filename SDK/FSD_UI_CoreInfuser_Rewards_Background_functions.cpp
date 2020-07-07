// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Rewards_Background_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::SetOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetOpen");

	UUI_CoreInfuser_Rewards_Background_C_SetOpen_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewardGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::SetRewardGiven(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewardGiven");

	UUI_CoreInfuser_Rewards_Background_C_SetRewardGiven_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USchematic*>      InRewards                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_CoreInfuser_Rewards_Background_C::SetRewards(TArray<class USchematic*>* InRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewards");

	UUI_CoreInfuser_Rewards_Background_C_SetRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewards != nullptr)
		*InRewards = params.InRewards;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.GetIconWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CoreInfuser_Reward_Background_C* IconWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::GetIconWidget(int* Index, class UUI_CoreInfuser_Reward_Background_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.GetIconWidget");

	UUI_CoreInfuser_Rewards_Background_C_GetIconWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconWidget != nullptr)
		*IconWidget = params.IconWidget;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::SetHovered(int* InIndex, bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetHovered");

	UUI_CoreInfuser_Rewards_Background_C_SetHovered_Params params;
	params.InIndex = InIndex;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardHovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::OnRewardHovered_Event(class UUI_CoreInfuser_Reward_Icon_C** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardHovered_Event");

	UUI_CoreInfuser_Rewards_Background_C_OnRewardHovered_Event_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardUnhovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::OnRewardUnhovered_Event(class UUI_CoreInfuser_Reward_Icon_C** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardUnhovered_Event");

	UUI_CoreInfuser_Rewards_Background_C_OnRewardUnhovered_Event_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardSelectedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::OnRewardSelectedEvent(class USchematic** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardSelectedEvent");

	UUI_CoreInfuser_Rewards_Background_C_OnRewardSelectedEvent_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.BindToRewardSelector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Rewards_Selector_C** RewardSelector                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::BindToRewardSelector(class UUI_CoreInfuser_Rewards_Selector_C** RewardSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.BindToRewardSelector");

	UUI_CoreInfuser_Rewards_Background_C_BindToRewardSelector_Params params;
	params.RewardSelector = RewardSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CoreInfuser_Rewards_Background_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.Construct");

	UUI_CoreInfuser_Rewards_Background_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Background
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Rewards_Background_C::ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Background");

	UUI_CoreInfuser_Rewards_Background_C_ExecuteUbergraph_UI_CoreInfuser_Rewards_Background_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
