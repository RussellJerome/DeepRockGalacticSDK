// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RewardDispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RewardDispenser.BP_RewardDispenser_C.IsStateValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_RewardDispenser_C::IsStateValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.IsStateValid");

	ABP_RewardDispenser_C_IsStateValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.GetRewardSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CoreInfuser_Rewards_Selector_C* Selector                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::GetRewardSelector(class ABP_CoreInfuser_Rewards_Selector_C** Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.GetRewardSelector");

	ABP_RewardDispenser_C_GetRewardSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selector != nullptr)
		*Selector = params.Selector;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.IsPlayerLocallyControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LocallyControlled              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::IsPlayerLocallyControlled(bool* LocallyControlled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.IsPlayerLocallyControlled");

	ABP_RewardDispenser_C_IsPlayerLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocallyControlled != nullptr)
		*LocallyControlled = params.LocallyControlled;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.ToggleRewardSelector
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::ToggleRewardSelector(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.ToggleRewardSelector");

	ABP_RewardDispenser_C_ToggleRewardSelector_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.OnOwnerAssigned
// (Event, Protected, BlueprintEvent)

void ABP_RewardDispenser_C::OnOwnerAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.OnOwnerAssigned");

	ABP_RewardDispenser_C_OnOwnerAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.OnPoweredUp
// (Event, Protected, BlueprintEvent)

void ABP_RewardDispenser_C::OnPoweredUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.OnPoweredUp");

	ABP_RewardDispenser_C_OnPoweredUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_RewardDispenser_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_RewardDispenser_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_RewardDispenser_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_RewardDispenser_C_BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardDispenser_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.Initialize");

	ABP_RewardDispenser_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.OnOpenDispenser
// (Event, Protected, BlueprintEvent)

void ABP_RewardDispenser_C::OnOpenDispenser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.OnOpenDispenser");

	ABP_RewardDispenser_C_OnOpenDispenser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.On Selector Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             SchematicReward                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::On_Selector_Finished(class USchematic** SchematicReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.On Selector Finished");

	ABP_RewardDispenser_C_On_Selector_Finished_Params params;
	params.SchematicReward = SchematicReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.OnRewardSelected
// (Event, Protected, BlueprintEvent)

void ABP_RewardDispenser_C::OnRewardSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.OnRewardSelected");

	ABP_RewardDispenser_C_OnRewardSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.Turn On Buttons
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardDispenser_C::Turn_On_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.Turn On Buttons");

	ABP_RewardDispenser_C_Turn_On_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.ExecuteUbergraph_BP_RewardDispenser
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardDispenser_C::ExecuteUbergraph_BP_RewardDispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.ExecuteUbergraph_BP_RewardDispenser");

	ABP_RewardDispenser_C_ExecuteUbergraph_BP_RewardDispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardDispenser.BP_RewardDispenser_C.OnDispenserFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_RewardDispenser_C::OnDispenserFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardDispenser.BP_RewardDispenser_C.OnDispenserFinished__DelegateSignature");

	ABP_RewardDispenser_C_OnDispenserFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
