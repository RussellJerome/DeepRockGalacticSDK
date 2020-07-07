// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BoscoAbillityProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BoscoAbillityProjectile_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted");

	ABP_BoscoAbillityProjectile_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoscoAbillityProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay");

	ABP_BoscoAbillityProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoAbillityProjectile_C::ExecuteUbergraph_BP_BoscoAbillityProjectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile");

	ABP_BoscoAbillityProjectile_C_ExecuteUbergraph_BP_BoscoAbillityProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
