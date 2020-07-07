// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterBuffIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterBuffIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.PreConstruct");

	UITM_CharacterBuffIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CharacterBuffIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.Construct");

	UITM_CharacterBuffIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnTemporaryBuffChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       AffectedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterBuffIcon_C::OnTemporaryBuffChanged(class UTemporaryBuff** buff, class APlayerCharacter** AffectedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnTemporaryBuffChanged");

	UITM_CharacterBuffIcon_C_OnTemporaryBuffChanged_Params params;
	params.buff = buff;
	params.AffectedPlayer = AffectedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.ExecuteUbergraph_ITM_CharacterBuffIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterBuffIcon_C::ExecuteUbergraph_ITM_CharacterBuffIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.ExecuteUbergraph_ITM_CharacterBuffIcon");

	UITM_CharacterBuffIcon_C_ExecuteUbergraph_ITM_CharacterBuffIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
