// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_ResourceIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ResourceIcon_C::SetData(class UResourceData** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.SetData");

	UITM_MisSel_ResourceIcon_C_SetData_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.ExecuteUbergraph_ITM_MisSel_ResourceIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ResourceIcon_C::ExecuteUbergraph_ITM_MisSel_ResourceIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.ExecuteUbergraph_ITM_MisSel_ResourceIcon");

	UITM_MisSel_ResourceIcon_C_ExecuteUbergraph_ITM_MisSel_ResourceIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
