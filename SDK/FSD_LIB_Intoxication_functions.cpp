// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Intoxication_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDrinkableAlcoholStrength*     Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Intoxication_C::STATIC_GetAlcoholStrengthPct(EDrinkableAlcoholStrength* Strength, class APlayerCharacter** Character, class UObject** __WorldContext, int* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct");

	ULIB_Intoxication_C_GetAlcoholStrengthPct_Params params;
	params.Strength = Strength;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDrinkableAlcoholStrength*     Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UpperCase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void ULIB_Intoxication_C::STATIC_GetAlcoholStrengthName(EDrinkableAlcoholStrength* Strength, bool* UpperCase, class UObject** __WorldContext, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName");

	ULIB_Intoxication_C_GetAlcoholStrengthName_Params params;
	params.Strength = Strength;
	params.UpperCase = UpperCase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
