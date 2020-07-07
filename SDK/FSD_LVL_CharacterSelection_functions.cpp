// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_CharacterSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_CharacterSelection_C::PlaySpecificSequence(class ULevelSequence** LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence");

	ALVL_CharacterSelection_C_PlaySpecificSequence_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ALVL_CharacterSelection_C::StopPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer");

	ALVL_CharacterSelection_C_StopPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation*  CamSetting                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_CharacterSelection_C::StartPlayer(ECharselectionCameraLocation* CamSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer");

	ALVL_CharacterSelection_C_StartPlayer_Params params;
	params.CamSetting = CamSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
// (BlueprintCallable, BlueprintEvent)

void ALVL_CharacterSelection_C::StopPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay");

	ALVL_CharacterSelection_C_StopPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         CharacterLevelSequence         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_CharacterSelection_C::StartLevelSeq(class ULevelSequence** CharacterLevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq");

	ALVL_CharacterSelection_C_StartLevelSeq_Params params;
	params.CharacterLevelSequence = CharacterLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation*  selectionLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_CharacterSelection_C::StartPlay(ECharselectionCameraLocation* selectionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay");

	ALVL_CharacterSelection_C_StartPlay_Params params;
	params.selectionLocation = selectionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALVL_CharacterSelection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay");

	ALVL_CharacterSelection_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_CharacterSelection_C::ExecuteUbergraph_LVL_CharacterSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection");

	ALVL_CharacterSelection_C_ExecuteUbergraph_LVL_CharacterSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
