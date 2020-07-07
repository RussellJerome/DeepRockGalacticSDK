// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_LargeWindowNoHeader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_LargeWindowNoHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct");

	UBasic_Menu_LargeWindowNoHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasic_Menu_LargeWindowNoHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct");

	UBasic_Menu_LargeWindowNoHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_LargeWindowNoHeader_C::ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader");

	UBasic_Menu_LargeWindowNoHeader_C_ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
