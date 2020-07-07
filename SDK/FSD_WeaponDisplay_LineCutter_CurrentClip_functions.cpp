// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_LineCutter_CurrentClip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_CurrentClip_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetClipCount");

	UWeaponDisplay_LineCutter_CurrentClip_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_CurrentClip_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetTotalCount");

	UWeaponDisplay_LineCutter_CurrentClip_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_CurrentClip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.PreConstruct");

	UWeaponDisplay_LineCutter_CurrentClip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_LineCutter_CurrentClip_C::ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip");

	UWeaponDisplay_LineCutter_CurrentClip_C_ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
