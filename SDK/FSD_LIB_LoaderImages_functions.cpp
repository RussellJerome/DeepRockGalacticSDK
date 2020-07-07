// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_LoaderImages_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_LoaderImages.LIB_LoaderImages_C.GetRandomSpacerigLoadImagePath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UTexture> Output                         (Parm, OutParm)

void ULIB_LoaderImages_C::STATIC_GetRandomSpacerigLoadImagePath(class UObject** __WorldContext, TSoftObjectPtr<class UTexture>* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_LoaderImages.LIB_LoaderImages_C.GetRandomSpacerigLoadImagePath");

	ULIB_LoaderImages_C_GetRandomSpacerigLoadImagePath_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
