// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_HostIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_HostIcon.ITM_HostIcon_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HostIcon_C::SetSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HostIcon.ITM_HostIcon_C.SetSize");

	UITM_HostIcon_C_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_HostIcon.ITM_HostIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HostIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HostIcon.ITM_HostIcon_C.PreConstruct");

	UITM_HostIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_HostIcon.ITM_HostIcon_C.ExecuteUbergraph_ITM_HostIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HostIcon_C::ExecuteUbergraph_ITM_HostIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HostIcon.ITM_HostIcon_C.ExecuteUbergraph_ITM_HostIcon");

	UITM_HostIcon_C_ExecuteUbergraph_ITM_HostIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
