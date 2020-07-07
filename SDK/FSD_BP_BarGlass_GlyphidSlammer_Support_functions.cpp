// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarGlass_GlyphidSlammer_Support_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BarGlass_GlyphidSlammer_Support_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C.UserConstructionScript");

	ABP_BarGlass_GlyphidSlammer_Support_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
