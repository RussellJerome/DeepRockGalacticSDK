// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MiniNuke_RadiationCloud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MiniNuke_RadiationCloud_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__FinishedFunc");

	ABP_MiniNuke_RadiationCloud_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MiniNuke_RadiationCloud_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__UpdateFunc");

	ABP_MiniNuke_RadiationCloud_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniNuke_RadiationCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ReceiveBeginPlay");

	ABP_MiniNuke_RadiationCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ExecuteUbergraph_BP_MiniNuke_RadiationCloud
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniNuke_RadiationCloud_C::ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ExecuteUbergraph_BP_MiniNuke_RadiationCloud");

	ABP_MiniNuke_RadiationCloud_C_ExecuteUbergraph_BP_MiniNuke_RadiationCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
