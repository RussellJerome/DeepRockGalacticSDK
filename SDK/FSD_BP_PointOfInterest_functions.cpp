// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PointOfInterest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PointOfInterest.BP_PointOfInterest_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PointOfInterest_C::Init(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Init");

	ABP_PointOfInterest_C_Init_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PointOfInterest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay");

	ABP_PointOfInterest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_PointOfInterest_C::Finished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event");

	ABP_PointOfInterest_C_Finished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PointOfInterest_C::ExecuteUbergraph_BP_PointOfInterest(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest");

	ABP_PointOfInterest_C_ExecuteUbergraph_BP_PointOfInterest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
