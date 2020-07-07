// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_FungusBogs_MapWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FungusBogs_MapWidget.FungusBogs_MapWidget_C.GetBasePanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            Panel                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFungusBogs_MapWidget_C::GetBasePanel(class UCanvasPanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FungusBogs_MapWidget.FungusBogs_MapWidget_C.GetBasePanel");

	UFungusBogs_MapWidget_C_GetBasePanel_Params params;

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
