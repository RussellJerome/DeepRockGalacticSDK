// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Incendiary_Flame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_Incendiary_Flame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ReceiveBeginPlay");

	ABP_Grenade_Incendiary_Flame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ExecuteUbergraph_BP_Grenade_Incendiary_Flame
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Incendiary_Flame_C::ExecuteUbergraph_BP_Grenade_Incendiary_Flame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ExecuteUbergraph_BP_Grenade_Incendiary_Flame");

	ABP_Grenade_Incendiary_Flame_C_ExecuteUbergraph_BP_Grenade_Incendiary_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
