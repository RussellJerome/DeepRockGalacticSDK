// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_CharacterIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       SelectedCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterIcon_C::FromPlayerState(class APlayerState** PlayerState, class APlayerCharacter** SelectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState");

	UITM_TopBar_CharacterIcon_C_FromPlayerState_Params params;
	params.PlayerState = PlayerState;
	params.SelectedCharacter = SelectedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XP_Progress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Times_Retired                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHost                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterIcon_C::SetHeroData(float* XP_Progress, int* Times_Retired, bool* IsHost, class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData");

	UITM_TopBar_CharacterIcon_C_SetHeroData_Params params;
	params.XP_Progress = XP_Progress;
	params.Times_Retired = Times_Retired;
	params.IsHost = IsHost;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterIcon_C::Update(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update");

	UITM_TopBar_CharacterIcon_C_Update_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_CharacterIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct");

	UITM_TopBar_CharacterIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterIcon_C::OnPlayerCharacterSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned");

	UITM_TopBar_CharacterIcon_C_OnPlayerCharacterSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_CharacterIcon_C::ExecuteUbergraph_ITM_TopBar_CharacterIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon");

	UITM_TopBar_CharacterIcon_C_ExecuteUbergraph_ITM_TopBar_CharacterIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
