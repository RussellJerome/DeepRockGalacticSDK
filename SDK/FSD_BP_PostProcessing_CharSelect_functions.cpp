// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PostProcessing_CharSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PostProcessing_CharSelect.BP_PostProcessing_CharSelect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PostProcessing_CharSelect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostProcessing_CharSelect.BP_PostProcessing_CharSelect_C.UserConstructionScript");

	ABP_PostProcessing_CharSelect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
