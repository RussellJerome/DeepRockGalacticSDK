// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ModParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModParent.ModParent_C.ModBeginPlay
// (BlueprintCallable, BlueprintEvent)

void AModParent_C::ModBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModParent.ModParent_C.ModBeginPlay");

	AModParent_C_ModBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModParent.ModParent_C.ExecuteUbergraph_ModParent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModParent_C::ExecuteUbergraph_ModParent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModParent.ModParent_C.ExecuteUbergraph_ModParent");

	AModParent_C_ExecuteUbergraph_ModParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
