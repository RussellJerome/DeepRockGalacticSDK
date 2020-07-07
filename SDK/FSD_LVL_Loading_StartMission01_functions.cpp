// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_StartMission01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed
// (Public, BlueprintCallable, BlueprintEvent)

void ALVL_Loading_StartMission01_C::OnFinshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed");

	ALVL_Loading_StartMission01_C_OnFinshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ALVL_Loading_StartMission01_C::StopPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer");

	ALVL_Loading_StartMission01_C_StopPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_StartMission01_C::StartPlayer(class ULevelSequence** LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer");

	ALVL_Loading_StartMission01_C_StartPlayer_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALVL_Loading_StartMission01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay");

	ALVL_Loading_StartMission01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LoaderLevelSequence            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_StartMission01_C::PlayerStart(class ULevelSequence** LoaderLevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart");

	ALVL_Loading_StartMission01_C_PlayerStart_Params params;
	params.LoaderLevelSequence = LoaderLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop
// (BlueprintCallable, BlueprintEvent)

void ALVL_Loading_StartMission01_C::PlayerStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop");

	ALVL_Loading_StartMission01_C_PlayerStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_Loading_StartMission01_C::ExecuteUbergraph_LVL_Loading_StartMission01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01");

	ALVL_Loading_StartMission01_C_ExecuteUbergraph_LVL_Loading_StartMission01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
