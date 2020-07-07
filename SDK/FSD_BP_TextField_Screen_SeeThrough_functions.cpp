// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_TextField_Screen_SeeThrough_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TextField_Screen_SeeThrough_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ReceiveBeginPlay");

	ABP_TextField_Screen_SeeThrough_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ExecuteUbergraph_BP_TextField_Screen_SeeThrough
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TextField_Screen_SeeThrough_C::ExecuteUbergraph_BP_TextField_Screen_SeeThrough(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ExecuteUbergraph_BP_TextField_Screen_SeeThrough");

	ABP_TextField_Screen_SeeThrough_C_ExecuteUbergraph_BP_TextField_Screen_SeeThrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
