// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Screen_BaseLoadLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq
// (BlueprintCallable, BlueprintEvent)

void UScreen_BaseLoadLevel_C::StartLoadSeq()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq");

	UScreen_BaseLoadLevel_C_StartLoadSeq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader
// (BlueprintCallable, BlueprintEvent)

void UScreen_BaseLoadLevel_C::StopLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader");

	UScreen_BaseLoadLevel_C_StopLoader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreen_BaseLoadLevel_C::ExecuteUbergraph_Screen_BaseLoadLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel");

	UScreen_BaseLoadLevel_C_ExecuteUbergraph_Screen_BaseLoadLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
