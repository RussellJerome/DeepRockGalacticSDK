// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Damage_Cloud_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Damage_Cloud_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript");

	ABP_Damage_Cloud_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc
// (BlueprintEvent)

void ABP_Damage_Cloud_Base_C::TriggerGrowth__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc");

	ABP_Damage_Cloud_Base_C_TriggerGrowth__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc
// (BlueprintEvent)

void ABP_Damage_Cloud_Base_C::TriggerGrowth__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc");

	ABP_Damage_Cloud_Base_C_TriggerGrowth__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Damage_Cloud_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay");

	ABP_Damage_Cloud_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Damage_Cloud_Base_C::ExecuteUbergraph_BP_Damage_Cloud_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base");

	ABP_Damage_Cloud_Base_C_ExecuteUbergraph_BP_Damage_Cloud_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
