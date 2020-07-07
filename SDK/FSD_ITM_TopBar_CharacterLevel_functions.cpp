// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_CharacterLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::FromPlayerState(class APlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState");

	UITM_TopBar_CharacterLevel_C_FromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CharacterLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::SetCharacterLevel(int* CharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel");

	UITM_TopBar_CharacterLevel_C_SetCharacterLevel_Params params;
	params.CharacterLevel = CharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct");

	UITM_TopBar_CharacterLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_CharacterLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct");

	UITM_TopBar_CharacterLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned");

	UITM_TopBar_CharacterLevel_C_OnPlayerCharacterSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event");

	UITM_TopBar_CharacterLevel_C_OnCharacterStatsChanged_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::ExecuteUbergraph_ITM_TopBar_CharacterLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel");

	UITM_TopBar_CharacterLevel_C_ExecuteUbergraph_ITM_TopBar_CharacterLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
