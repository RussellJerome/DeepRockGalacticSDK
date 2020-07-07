// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_ITM_MissionStepRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription* step                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           StepNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepsInRow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULore_ITM_MissionStep_C* StepWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULore_ITM_MissionStepRow_C::AddStep(struct FMissionStepDescription* step, int* StepNumber, int* StepsInRow, class ULore_ITM_MissionStep_C** StepWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep");

	ULore_ITM_MissionStepRow_C_AddStep_Params params;
	params.step = step;
	params.StepNumber = StepNumber;
	params.StepsInRow = StepsInRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepWidget != nullptr)
		*StepWidget = params.StepWidget;
}


// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow
// (BlueprintCallable, BlueprintEvent)

void ULore_ITM_MissionStepRow_C::ClearRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow");

	ULore_ITM_MissionStepRow_C_ClearRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStepRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct");

	ULore_ITM_MissionStepRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStepRow_C::ExecuteUbergraph_Lore_ITM_MissionStepRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow");

	ULore_ITM_MissionStepRow_C_ExecuteUbergraph_Lore_ITM_MissionStepRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULore_ITM_MissionStepRow_C::OnStepUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature");

	ULore_ITM_MissionStepRow_C_OnStepUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription* step                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_ITM_MissionStepRow_C::OnStepHovered__DelegateSignature(struct FMissionStepDescription* step)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature");

	ULore_ITM_MissionStepRow_C_OnStepHovered__DelegateSignature_Params params;
	params.step = step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
