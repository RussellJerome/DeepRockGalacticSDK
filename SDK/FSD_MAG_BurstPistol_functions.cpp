// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_BurstPistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MAG_BurstPistol.MAG_BurstPistol_C.Attached
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_BurstPistol_C::Attached(class AActor** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.Attached");

	AMAG_BurstPistol_C_Attached_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_BurstPistol.MAG_BurstPistol_C.Released
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_BurstPistol_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.Released");

	AMAG_BurstPistol_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease
// (BlueprintCallable, BlueprintEvent)

void AMAG_BurstPistol_C::DoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease");

	AMAG_BurstPistol_C_DoRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMAG_BurstPistol_C::ExecuteUbergraph_MAG_BurstPistol(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol");

	AMAG_BurstPistol_C_ExecuteUbergraph_MAG_BurstPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
