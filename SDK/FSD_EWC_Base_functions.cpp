// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Base.EWC_Base_C.PlayWaveMusic
// (BlueprintCallable, BlueprintEvent)

void UEWC_Base_C::PlayWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayWaveMusic");

	UEWC_Base_C_PlayWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Base.EWC_Base_C.PlayEndWaveMusic
// (BlueprintCallable, BlueprintEvent)

void UEWC_Base_C::PlayEndWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayEndWaveMusic");

	UEWC_Base_C_PlayEndWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Base.EWC_Base_C.StopWaveMusic
// (BlueprintCallable, BlueprintEvent)

void UEWC_Base_C::StopWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.StopWaveMusic");

	UEWC_Base_C_StopWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEWC_Base_C::ExecuteUbergraph_EWC_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base");

	UEWC_Base_C_ExecuteUbergraph_EWC_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
