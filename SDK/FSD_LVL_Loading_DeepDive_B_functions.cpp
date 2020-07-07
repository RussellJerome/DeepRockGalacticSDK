// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_DeepDive_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ALVL_Loading_DeepDive_B_C::StopPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer");

	ALVL_Loading_DeepDive_B_C_StopPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StartPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_DeepDive_B_C::StartPlayer(class ULevelSequence** LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StartPlayer");

	ALVL_Loading_DeepDive_B_C_StartPlayer_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALVL_Loading_DeepDive_B_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay");

	ALVL_Loading_DeepDive_B_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LoaderLevelSequence            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_DeepDive_B_C::PlayerStart(class ULevelSequence** LoaderLevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart");

	ALVL_Loading_DeepDive_B_C_PlayerStart_Params params;
	params.LoaderLevelSequence = LoaderLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop
// (BlueprintCallable, BlueprintEvent)

void ALVL_Loading_DeepDive_B_C::PlayerStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop");

	ALVL_Loading_DeepDive_B_C_PlayerStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_DeepDive_B_C::ExecuteUbergraph_LVL_Loading_DeepDive_B(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B");

	ALVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
