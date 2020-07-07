// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_Text_Header_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Header_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectiveMissionIcon*  MissionIcon                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_Content_Text_Header_C::SetData(struct FText* Header_Text, class UTexture2D** Icon, struct FObjectiveMissionIcon* MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData");

	ULore_Content_Text_Header_C_SetData_Params params;
	params.Header_Text = Header_Text;
	params.Icon = Icon;
	params.MissionIcon = MissionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_Text_Header_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct");

	ULore_Content_Text_Header_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_Text_Header_C::ExecuteUbergraph_Lore_Content_Text_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header");

	ULore_Content_Text_Header_C_ExecuteUbergraph_Lore_Content_Text_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
