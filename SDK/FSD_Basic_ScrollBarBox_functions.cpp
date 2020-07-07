// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ScrollBarBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ScrollBarBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct");

	UBasic_ScrollBarBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                WidgetToFind                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          AnimateScroll                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDescendantScrollDestination*  ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ScrollBarBox_C::ScrollToChild(class UWidget** WidgetToFind, bool* AnimateScroll, EDescendantScrollDestination* ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild");

	UBasic_ScrollBarBox_C_ScrollToChild_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ScrollBarBox_C::ExecuteUbergraph_Basic_ScrollBarBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox");

	UBasic_ScrollBarBox_C_ExecuteUbergraph_Basic_ScrollBarBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
