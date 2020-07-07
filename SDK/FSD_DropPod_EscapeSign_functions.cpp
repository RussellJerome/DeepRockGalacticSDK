// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DropPod_EscapeSign_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropPod_EscapeSign.DropPod_EscapeSign_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropPod_EscapeSign_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_EscapeSign.DropPod_EscapeSign_C.PreConstruct");

	UDropPod_EscapeSign_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPod_EscapeSign.DropPod_EscapeSign_C.ExecuteUbergraph_DropPod_EscapeSign
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropPod_EscapeSign_C::ExecuteUbergraph_DropPod_EscapeSign(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_EscapeSign.DropPod_EscapeSign_C.ExecuteUbergraph_DropPod_EscapeSign");

	UDropPod_EscapeSign_C_ExecuteUbergraph_DropPod_EscapeSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
