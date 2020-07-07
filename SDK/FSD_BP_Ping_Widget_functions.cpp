// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Ping_Widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ping_Widget.BP_Ping_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Ping_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ping_Widget.BP_Ping_Widget_C.Construct");

	UBP_Ping_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ping_Widget.BP_Ping_Widget_C.ExecuteUbergraph_BP_Ping_Widget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Ping_Widget_C::ExecuteUbergraph_BP_Ping_Widget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ping_Widget.BP_Ping_Widget_C.ExecuteUbergraph_BP_Ping_Widget");

	UBP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
