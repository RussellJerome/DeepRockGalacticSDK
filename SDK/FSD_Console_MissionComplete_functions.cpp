// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_MissionComplete_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMissionResultInfo*      MissionResultInfo              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionComplete_C::GetMissionResult(class UMissionResultInfo** MissionResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult");

	UConsole_MissionComplete_C_GetMissionResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionResultInfo != nullptr)
		*MissionResultInfo = params.MissionResultInfo;
}


// Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionComplete_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct");

	UConsole_MissionComplete_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen
// (BlueprintCallable, BlueprintEvent)

void UConsole_MissionComplete_C::BeginScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen");

	UConsole_MissionComplete_C_BeginScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionComplete.Console_MissionComplete_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsole_MissionComplete_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.Construct");

	UConsole_MissionComplete_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_MissionComplete_C::ExecuteUbergraph_Console_MissionComplete(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete");

	UConsole_MissionComplete_C_ExecuteUbergraph_Console_MissionComplete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
