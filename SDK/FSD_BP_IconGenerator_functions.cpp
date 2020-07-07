// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_IconGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IconGenerator.BP_IconGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IconGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconGenerator.BP_IconGenerator_C.UserConstructionScript");

	ABP_IconGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconGenerator.BP_IconGenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IconGenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconGenerator.BP_IconGenerator_C.ReceiveBeginPlay");

	ABP_IconGenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconGenerator.BP_IconGenerator_C.ExecuteUbergraph_BP_IconGenerator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IconGenerator_C::ExecuteUbergraph_BP_IconGenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconGenerator.BP_IconGenerator_C.ExecuteUbergraph_BP_IconGenerator");

	ABP_IconGenerator_C_ExecuteUbergraph_BP_IconGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
