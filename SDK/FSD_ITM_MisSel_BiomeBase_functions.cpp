// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_BiomeBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.GetBasePanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            Panel                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MisSel_BiomeBase_C::GetBasePanel(class UCanvasPanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.GetBasePanel");

	UITM_MisSel_BiomeBase_C_GetBasePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Panel != nullptr)
		*Panel = params.Panel;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
