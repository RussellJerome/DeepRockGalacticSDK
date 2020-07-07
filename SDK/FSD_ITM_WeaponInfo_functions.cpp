// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeaponInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_WeaponInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponInfo.ITM_WeaponInfo_C.Construct");

	UITM_WeaponInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WeaponInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct");

	UITM_WeaponInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponInfo.ITM_WeaponInfo_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITM_WeaponInfo_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponInfo.ITM_WeaponInfo_C.Update");

	UITM_WeaponInfo_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WeaponInfo_C::ExecuteUbergraph_ITM_WeaponInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo");

	UITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
