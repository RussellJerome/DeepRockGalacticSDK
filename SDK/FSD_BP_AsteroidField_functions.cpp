// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AsteroidField_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AsteroidField.BP_AsteroidField_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AsteroidField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.UserConstructionScript");

	ABP_AsteroidField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AsteroidField.BP_AsteroidField_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AsteroidField_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.ReceiveBeginPlay");

	ABP_AsteroidField_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AsteroidField.BP_AsteroidField_C.ExecuteUbergraph_BP_AsteroidField
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AsteroidField_C::ExecuteUbergraph_BP_AsteroidField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.ExecuteUbergraph_BP_AsteroidField");

	ABP_AsteroidField_C_ExecuteUbergraph_BP_AsteroidField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
