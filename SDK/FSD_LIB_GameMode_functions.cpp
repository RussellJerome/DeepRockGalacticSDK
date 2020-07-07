// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_GameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_GameMode.LIB_GameMode_C.GetBPGameMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_GameMode_C*          GameMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_GameMode_C::STATIC_GetBPGameMode(class UObject** __WorldContext, class ABP_GameMode_C** GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_GameMode.LIB_GameMode_C.GetBPGameMode");

	ULIB_GameMode_C_GetBPGameMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
