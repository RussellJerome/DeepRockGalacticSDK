// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_Flamethrower_BottleTP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Attached
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_Flamethrower_BottleTP_C::Attached(class AActor** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Attached");

	AMAG_Flamethrower_BottleTP_C_Attached_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Released
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_Flamethrower_BottleTP_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Released");

	AMAG_Flamethrower_BottleTP_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease
// (BlueprintCallable, BlueprintEvent)

void AMAG_Flamethrower_BottleTP_C::DoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease");

	AMAG_Flamethrower_BottleTP_C_DoRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnItemSkinned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMAG_Flamethrower_BottleTP_C::OnItemSkinned(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnItemSkinned");

	AMAG_Flamethrower_BottleTP_C_OnItemSkinned_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMAG_Flamethrower_BottleTP_C::ExecuteUbergraph_MAG_Flamethrower_BottleTP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP");

	AMAG_Flamethrower_BottleTP_C_ExecuteUbergraph_MAG_Flamethrower_BottleTP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
