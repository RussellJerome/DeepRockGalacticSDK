// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_Eliminate_Eggs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C.GetInMissionCounterIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_Eliminate_Eggs_C::GetInMissionCounterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C.GetInMissionCounterIcon");

	UOBJ_Eliminate_Eggs_C_GetInMissionCounterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
