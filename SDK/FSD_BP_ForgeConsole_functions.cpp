// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ForgeConsole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowWidget**          WindowWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ForgeConsole_C::OnWindowCreated(class UWindowWidget** WindowWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated");

	ABP_ForgeConsole_C_OnWindowCreated_Params params;
	params.WindowWidget = WindowWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner
// (BlueprintCallable, BlueprintEvent)

void ABP_ForgeConsole_C::UpdateNotificationBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner");

	ABP_ForgeConsole_C_UpdateNotificationBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForgeConsole_C::ExecuteUbergraph_BP_ForgeConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole");

	ABP_ForgeConsole_C_ExecuteUbergraph_BP_ForgeConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
