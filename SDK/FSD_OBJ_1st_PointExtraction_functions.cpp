// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_PointExtraction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C.GetMissionIcon
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FObjectiveMissionIcon   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveMissionIcon UOBJ_1st_PointExtraction_C::GetMissionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C.GetMissionIcon");

	UOBJ_1st_PointExtraction_C_GetMissionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
