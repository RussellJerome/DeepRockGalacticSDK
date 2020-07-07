// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RetirementBadge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TimesRetired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::SetTimesRetired(int* TimesRetired)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired");

	UITM_RetirementBadge_C_SetTimesRetired_Params params;
	params.TimesRetired = TimesRetired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::SetCharacterClass(class AFSDPlayerState** PlayerState, class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass");

	UITM_RetirementBadge_C_SetCharacterClass_Params params;
	params.PlayerState = PlayerState;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           RetirementLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::SelectIcon(int* RetirementLevel, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon");

	UITM_RetirementBadge_C_SelectIcon_Params params;
	params.RetirementLevel = RetirementLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::SetData(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData");

	UITM_RetirementBadge_C_SetData_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct");

	UITM_RetirementBadge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RetirementBadge_C::ExecuteUbergraph_ITM_RetirementBadge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge");

	UITM_RetirementBadge_C_ExecuteUbergraph_ITM_RetirementBadge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
