// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_WindowBG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_WindowBG.Basic_Menu_WindowBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_WindowBG_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_WindowBG.Basic_Menu_WindowBG_C.PreConstruct");

	UBasic_Menu_WindowBG_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_WindowBG.Basic_Menu_WindowBG_C.ExecuteUbergraph_Basic_Menu_WindowBG
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_WindowBG_C::ExecuteUbergraph_Basic_Menu_WindowBG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_WindowBG.Basic_Menu_WindowBG_C.ExecuteUbergraph_Basic_Menu_WindowBG");

	UBasic_Menu_WindowBG_C_ExecuteUbergraph_Basic_Menu_WindowBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
