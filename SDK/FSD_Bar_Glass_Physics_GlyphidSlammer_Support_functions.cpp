// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Bar_Glass_Physics_GlyphidSlammer_Support_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bar_Glass_Physics_GlyphidSlammer_Support.Bar_Glass_Physics_GlyphidSlammer_Support_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABar_Glass_Physics_GlyphidSlammer_Support_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bar_Glass_Physics_GlyphidSlammer_Support.Bar_Glass_Physics_GlyphidSlammer_Support_C.UserConstructionScript");

	ABar_Glass_Physics_GlyphidSlammer_Support_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
