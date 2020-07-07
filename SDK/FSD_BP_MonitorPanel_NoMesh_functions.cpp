// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MonitorPanel_NoMesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MonitorPanel_NoMesh.BP_MonitorPanel_NoMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MonitorPanel_NoMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonitorPanel_NoMesh.BP_MonitorPanel_NoMesh_C.ReceiveBeginPlay");

	ABP_MonitorPanel_NoMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MonitorPanel_NoMesh.BP_MonitorPanel_NoMesh_C.ExecuteUbergraph_BP_MonitorPanel_NoMesh
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MonitorPanel_NoMesh_C::ExecuteUbergraph_BP_MonitorPanel_NoMesh(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonitorPanel_NoMesh.BP_MonitorPanel_NoMesh_C.ExecuteUbergraph_BP_MonitorPanel_NoMesh");

	ABP_MonitorPanel_NoMesh_C_ExecuteUbergraph_BP_MonitorPanel_NoMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
