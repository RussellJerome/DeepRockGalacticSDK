// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_TurretEMPDischarge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TurretEMPDischarge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ReceiveBeginPlay");

	ABP_TurretEMPDischarge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ExecuteUbergraph_BP_TurretEMPDischarge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TurretEMPDischarge_C::ExecuteUbergraph_BP_TurretEMPDischarge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ExecuteUbergraph_BP_TurretEMPDischarge");

	ABP_TurretEMPDischarge_C_ExecuteUbergraph_BP_TurretEMPDischarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
