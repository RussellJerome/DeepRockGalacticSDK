// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_E3trailer_AsteroidField_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_E3trailer_AsteroidField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C.UserConstructionScript");

	ABP_E3trailer_AsteroidField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
