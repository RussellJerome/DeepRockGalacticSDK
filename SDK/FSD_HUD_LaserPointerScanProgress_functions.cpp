// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerScanProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerScanProgress_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress");

	UHUD_LaserPointerScanProgress_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerScanProgress_C::ExecuteUbergraph_HUD_LaserPointerScanProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress");

	UHUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
