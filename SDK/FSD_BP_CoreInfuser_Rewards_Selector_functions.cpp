// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CoreInfuser_Rewards_Selector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetBackgroundsWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_CoreInfuser_Rewards_Background_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::GetBackgroundsWidget(class UUI_CoreInfuser_Rewards_Background_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetBackgroundsWidget");

	ABP_CoreInfuser_Rewards_Selector_C_GetBackgroundsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetRewardsWidget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_CoreInfuser_Rewards_Selector_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::GetRewardsWidget(class UUI_CoreInfuser_Rewards_Selector_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetRewardsWidget");

	ABP_CoreInfuser_Rewards_Selector_C_GetRewardsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CoreInfuser_Rewards_Selector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ReceiveBeginPlay");

	ABP_CoreInfuser_Rewards_Selector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::SetVisible(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetVisible");

	ABP_CoreInfuser_Rewards_Selector_C_SetVisible_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelectedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::OnRewardSelectedEvent(class USchematic** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelectedEvent");

	ABP_CoreInfuser_Rewards_Selector_C_OnRewardSelectedEvent_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetSelectedReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::SetSelectedReward(class USchematic** InReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetSelectedReward");

	ABP_CoreInfuser_Rewards_Selector_C_SetSelectedReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetDispenser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventRewardDispenser**  InDispenser                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::SetDispenser(class AEventRewardDispenser** InDispenser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetDispenser");

	ABP_CoreInfuser_Rewards_Selector_C_SetDispenser_Params params;
	params.InDispenser = InDispenser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.Set Selectable Rewards
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USchematic*>      InRewards                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CoreInfuser_Rewards_Selector_C::Set_Selectable_Rewards(TArray<class USchematic*>* InRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.Set Selectable Rewards");

	ABP_CoreInfuser_Rewards_Selector_C_Set_Selectable_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewards != nullptr)
		*InRewards = params.InRewards;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector");

	ABP_CoreInfuser_Rewards_Selector_C_ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             SchematicReward                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreInfuser_Rewards_Selector_C::OnRewardSelected__DelegateSignature(class USchematic** SchematicReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature");

	ABP_CoreInfuser_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params params;
	params.SchematicReward = SchematicReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
