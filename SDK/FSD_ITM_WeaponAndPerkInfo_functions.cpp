// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeaponAndPerkInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITM_WeaponAndPerkInfo_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update");

	UITM_WeaponAndPerkInfo_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter
// (BlueprintCallable, BlueprintEvent)

void UITM_WeaponAndPerkInfo_C::PlayEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter");

	UITM_WeaponAndPerkInfo_C_PlayEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave
// (BlueprintCallable, BlueprintEvent)

void UITM_WeaponAndPerkInfo_C::PlayLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave");

	UITM_WeaponAndPerkInfo_C_PlayLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_WeaponAndPerkInfo_C::EnterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished");

	UITM_WeaponAndPerkInfo_C_EnterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WeaponAndPerkInfo_C::ExecuteUbergraph_ITM_WeaponAndPerkInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo");

	UITM_WeaponAndPerkInfo_C_ExecuteUbergraph_ITM_WeaponAndPerkInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
