// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterData_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 OptionalCharacterClass         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::FromPlayerState(class AFSDPlayerState** InPlayerState, class UClass** OptionalCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerState");

	UITM_CharacterData_C_FromPlayerState_Params params;
	params.InPlayerState = InPlayerState;
	params.OptionalCharacterClass = OptionalCharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       SetCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::FromPlayerCharacter(class APlayerCharacter** SetCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerCharacter");

	UITM_CharacterData_C_FromPlayerCharacter_Params params;
	params.SetCharacter = SetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterData.ITM_CharacterData_C.SetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  HeroName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           PlayerRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CharacterLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LevelProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentXP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequiredXP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::SetData(class FString* PlayerName, struct FText* HeroName, int* PlayerRank, int* CharacterLevel, float* LevelProgress, int* CurrentXP, int* RequiredXP, class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.SetData");

	UITM_CharacterData_C_SetData_Params params;
	params.PlayerName = PlayerName;
	params.HeroName = HeroName;
	params.PlayerRank = PlayerRank;
	params.CharacterLevel = CharacterLevel;
	params.LevelProgress = LevelProgress;
	params.CurrentXP = CurrentXP;
	params.RequiredXP = RequiredXP;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterData.ITM_CharacterData_C.SetToggles
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlayerRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CharacterLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          XPcounter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          XPbar                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Supplies                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::SetToggles(bool* PlayerName, bool* PlayerRank, bool* CharacterName, bool* CharacterLevel, bool* XPcounter, bool* XPbar, bool* Supplies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.SetToggles");

	UITM_CharacterData_C_SetToggles_Params params;
	params.PlayerName = PlayerName;
	params.PlayerRank = PlayerRank;
	params.CharacterName = CharacterName;
	params.CharacterLevel = CharacterLevel;
	params.XPcounter = XPcounter;
	params.XPbar = XPbar;
	params.Supplies = Supplies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterData.ITM_CharacterData_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.PreConstruct");

	UITM_CharacterData_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterData.ITM_CharacterData_C.ExecuteUbergraph_ITM_CharacterData
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterData_C::ExecuteUbergraph_ITM_CharacterData(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.ExecuteUbergraph_ITM_CharacterData");

	UITM_CharacterData_C_ExecuteUbergraph_ITM_CharacterData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
