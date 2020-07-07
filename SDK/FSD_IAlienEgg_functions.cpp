// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_IAlienEgg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IAlienEgg.IAlienEgg_C.SetSpecialEgg
// (Public, BlueprintCallable, BlueprintEvent)

void UIAlienEgg_C::SetSpecialEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function IAlienEgg.IAlienEgg_C.SetSpecialEgg");

	UIAlienEgg_C_SetSpecialEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
