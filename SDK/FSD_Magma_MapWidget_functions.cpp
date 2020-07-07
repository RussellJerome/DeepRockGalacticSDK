// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Magma_MapWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Magma_MapWidget.Magma_MapWidget_C.GetBasePanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            Panel                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMagma_MapWidget_C::GetBasePanel(class UCanvasPanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magma_MapWidget.Magma_MapWidget_C.GetBasePanel");

	UMagma_MapWidget_C_GetBasePanel_Params params;

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
