// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowIcons                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Icon_C::ToggleIcons(bool* ShowIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons");

	UITM_MasteryBar_Icon_C_ToggleIcons_Params params;
	params.ShowIcons = ShowIcons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Icon_C::SetUnlocked(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked");

	UITM_MasteryBar_Icon_C_SetUnlocked_Params params;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MasteryBar_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct");

	UITM_MasteryBar_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct");

	UITM_MasteryBar_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UITM_MasteryBar_Icon_C::ReceiveUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked");

	UITM_MasteryBar_Icon_C_ReceiveUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Icon_C::ExecuteUbergraph_ITM_MasteryBar_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon");

	UITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
