// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Crye_SnowBall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_Crye_SnowBall_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.OnImpacted");

	APRJ_Crye_SnowBall_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.ExecuteUbergraph_PRJ_Crye_SnowBall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_Crye_SnowBall_C::ExecuteUbergraph_PRJ_Crye_SnowBall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.ExecuteUbergraph_PRJ_Crye_SnowBall");

	APRJ_Crye_SnowBall_C_ExecuteUbergraph_PRJ_Crye_SnowBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
