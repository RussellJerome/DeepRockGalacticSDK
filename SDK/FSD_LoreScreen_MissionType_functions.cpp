// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_MissionType_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription* step                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepsInRow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MissionType_C::StepHovered(struct FMissionStepDescription* step, int* StepIndex, int* StepsInRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered");

	ULoreScreen_MissionType_C_StepHovered_Params params;
	params.step = step;
	params.StepIndex = StepIndex;
	params.StepsInRow = StepsInRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoreScreen_MissionType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct");

	ULoreScreen_MissionType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_MissionType_C::RefreshContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent");

	ULoreScreen_MissionType_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_MissionType_C::StepUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered");

	ULoreScreen_MissionType_C_StepUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MissionType_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct");

	ULoreScreen_MissionType_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MissionType_C::ExecuteUbergraph_LoreScreen_MissionType(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType");

	ULoreScreen_MissionType_C_ExecuteUbergraph_LoreScreen_MissionType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
